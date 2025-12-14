/*
  Water Quality Logger (Manual Input -> CSV)
  Matches Excel schema:
  Sample ID, Location, Date, Time (GMT +7), Round, Parameter, Value, Unit, Note

  Commands (one per line):
    HELP
    STATUS
    SETID <text>
    SETLOCATION <text>
    SETDATE YYYY-MM-DD
    SETTIME HH:MM:SS
    SETROUND <int>
    NOTE <text>

    PH <value>
    TEMP <value>              (°C)
    EC <value> <unit>         (e.g. EC 140 uS/cm)
    DO <value> <unit>         (optional)
    TDS <value> <unit>        (optional)
*/

String sampleId     = "HCMUS-FishPond-01";
String location     = "Fishpond near Faculty area - HCMUS Campus 2";
String currentDate  = "2025-12-15";
String currentTime  = "08:35:00";
int    currentRound = 1;
String lastNote     = "";

static String rxBuf = "";

String csvSafe(const String& s) {
  bool needsQuote = false;
  for (unsigned int i = 0; i < s.length(); i++) {
    char c = s[i];
    if (c == ',' || c == '"' || c == '\n' || c == '\r') { needsQuote = true; break; }
  }
  if (!needsQuote) return s;

  String out = "\"";
  for (unsigned int i = 0; i < s.length(); i++) {
    char c = s[i];
    if (c == '"') out += "\"\"";
    else out += c;
  }
  out += "\"";
  return out;
}

void printRow(const String& param, const String& value, const String& unit, const String& note) {
  Serial.print(csvSafe(sampleId));    Serial.print(",");
  Serial.print(csvSafe(location));    Serial.print(",");
  Serial.print(csvSafe(currentDate)); Serial.print(",");
  Serial.print(csvSafe(currentTime)); Serial.print(",");
  Serial.print(currentRound);         Serial.print(",");
  Serial.print(csvSafe(param));       Serial.print(",");
  Serial.print(csvSafe(value));       Serial.print(",");
  Serial.print(csvSafe(unit));        Serial.print(",");
  Serial.println(csvSafe(note));
}

void printHelp() {
  Serial.println("Commands:");
  Serial.println("  HELP");
  Serial.println("  STATUS");
  Serial.println("  SETID <text>              e.g., SETID HCMUS-FishPond-01");
  Serial.println("  SETLOCATION <text>        e.g., SETLOCATION Fishpond near Faculty area - HCMUS Campus 2");
  Serial.println("  SETDATE YYYY-MM-DD        e.g., SETDATE 2025-12-15");
  Serial.println("  SETTIME HH:MM:SS          e.g., SETTIME 08:35:00");
  Serial.println("  SETROUND <int>            e.g., SETROUND 1");
  Serial.println("  NOTE <text>               e.g., NOTE Initial measurement after sample collection.");
  Serial.println("  PH <value>                e.g., PH 6.42");
  Serial.println("  TEMP <value>              e.g., TEMP 29.6   (unit is °C)");
  Serial.println("  EC <value> <unit>          e.g., EC 140 uS/cm");
  Serial.println("  DO <value> <unit>          e.g., DO 7.8 mg/L (optional)");
  Serial.println("  TDS <value> <unit>         e.g., TDS 77 ppm  (optional)");
}

void printStatus() {
  Serial.println("STATUS:");
  Serial.print("  Sample ID  = "); Serial.println(sampleId);
  Serial.print("  Location   = "); Serial.println(location);
  Serial.print("  Date       = "); Serial.println(currentDate);
  Serial.print("  Time       = "); Serial.println(currentTime);
  Serial.print("  Round      = "); Serial.println(currentRound);
  Serial.print("  Note       = "); Serial.println(lastNote);
}

bool splitValueUnit(const String& rest, String& value, String& unit) {
  int sp = rest.indexOf(' ');
  if (sp < 0) return false;
  value = rest.substring(0, sp); value.trim();
  unit  = rest.substring(sp + 1); unit.trim();
  return (value.length() > 0 && unit.length() > 0);
}

void handleLine(String line) {
  line.trim();
  if (line.length() == 0) return;

  String upper = line;
  upper.toUpperCase();

  if (upper == "HELP") { printHelp(); return; }
  if (upper == "STATUS") { printStatus(); return; }

  if (upper.startsWith("SETID ")) {
    sampleId = line.substring(6); sampleId.trim();
    Serial.print("OK id = "); Serial.println(sampleId);
    return;
  }
  if (upper.startsWith("SETLOCATION ")) {
    location = line.substring(12); location.trim();
    Serial.print("OK location = "); Serial.println(location);
    return;
  }
  if (upper.startsWith("SETDATE ")) {
    currentDate = line.substring(8); currentDate.trim();
    Serial.print("OK date = "); Serial.println(currentDate);
    return;
  }
  if (upper.startsWith("SETTIME ")) {
    currentTime = line.substring(8); currentTime.trim();
    Serial.print("OK time = "); Serial.println(currentTime);
    return;
  }
  if (upper.startsWith("SETROUND ")) {
    String v = line.substring(9); v.trim();
    currentRound = v.toInt();
    Serial.print("OK round = "); Serial.println(currentRound);
    return;
  }
  if (upper.startsWith("NOTE ")) {
    lastNote = line.substring(5); lastNote.trim();
    Serial.print("OK note saved: "); Serial.println(lastNote);
    return;
  }

  if (upper.startsWith("PH ")) {
    String v = line.substring(3); v.trim();
    if (v.length() == 0) { Serial.println("ERR: PH needs value. Example: PH 6.42"); return; }
    printRow("pH", v, "pH", lastNote);
    return;
  }

  if (upper.startsWith("TEMP ")) {
    String v = line.substring(5); v.trim();
    if (v.length() == 0) { Serial.println("ERR: TEMP needs value. Example: TEMP 29.6"); return; }
    printRow("Temperature", v, "°C", lastNote);
    return;
  }

  if (upper.startsWith("EC ")) {
    String rest = line.substring(3); rest.trim();
    String value, unit;
    if (!splitValueUnit(rest, value, unit)) {
      Serial.println("ERR: EC needs value + unit. Example: EC 140 uS/cm");
      return;
    }
    printRow("EC", value, unit, lastNote);
    return;
  }

  if (upper.startsWith("DO ")) {
    String rest = line.substring(3); rest.trim();
    String value, unit;
    if (!splitValueUnit(rest, value, unit)) {
      Serial.println("ERR: DO needs value + unit. Example: DO 7.8 mg/L");
      return;
    }
    printRow("DO", value, unit, lastNote);
    return;
  }

  if (upper.startsWith("TDS ")) {
    String rest = line.substring(4); rest.trim();
    String value, unit;
    if (!splitValueUnit(rest, value, unit)) {
      Serial.println("ERR: TDS needs value + unit. Example: TDS 77 ppm");
      return;
    }
    printRow("TDS", value, unit, lastNote);
    return;
  }

  Serial.println("ERR: Unknown command. Type HELP.");
}

void setup() {
  Serial.begin(9600);
  delay(300);

  Serial.println("Water Quality Logger ready.");
  Serial.println("Tip: Set Serial Monitor line ending to Newline or Both NL & CR.");
  printHelp();
  Serial.println();
  Serial.println("CSV output rows will appear below (copy/paste to .csv):");
}

void loop() {
  while (Serial.available()) {
    char c = (char)Serial.read();

    // Treat both '\n' and '\r' as line end (robust for any Serial Monitor setting)
    if (c == '\n' || c == '\r') {
      if (rxBuf.length() > 0) {
        handleLine(rxBuf);
        rxBuf = "";
      }
    } else {
      rxBuf += c;
      if (rxBuf.length() > 200) { // safety
        Serial.println("ERR: line too long");
        rxBuf = "";
      }
    }
  }
}
