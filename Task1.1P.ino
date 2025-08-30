// Code:
 
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  blinkName("Aditya");
  delay(3000);  // Delay before repeating the name.
}

// Function for blinking the entire name in Morse code.
void blinkName(String name) {
  for (int i = 0; i < name.length(); i++) {
    char currentChar = toupper(name[i]);
    blinkLetter(currentChar);
    letterSpace();
  }
}

// Function for processing each individual character.
void blinkLetter(char c) {
  String morse = getMorse(c);
  for (int i = 0; i < morse.length(); i++) {
    if (morse[i] == '.') {
      dot();
    } else if (morse[i] == '-') {
      dash();
    }
    delay(250);  // Delay between dots/dashes
  }
}

// Switch casing for getting the Morse code pattern of any character.
String getMorse(char c) {
  switch (c) {
    case 'A': return ".-";
    case 'D': return "-..";
    case 'I': return "..";
    case 'T': return "-";
    case 'Y': return "-.--";
    default: return "";
  }
}

// Function for controlling the LED for only dot signals.
void dot() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(200);
  digitalWrite(LED_BUILTIN, LOW);
  delay(200);
}

// Function for controlling the LED for only dash signals.
void dash() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(600);
  digitalWrite(LED_BUILTIN, LOW);
  delay(200);
}

// Function for adding space between each character.
void letterSpace() {
  delay(600);
}
