// Ich erstelle eine globale Variable, um den Zustand des Schalters zu speichern.
// Es ist im gesamten Programm beständig.
int SchaltZustand() {
  // Ihc deklariere die LED-Pins als Outputs.
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

  // Ich declariere ein Schalter-Pin als Input.
  pinMode(2, INPUT);
}

void loop() {
  // Lies den Wert des Schalters aus.
  // digitalRead() prüft, ob am Pin eine Spannung anliegt oder nicht.
  SchalterZustand ´digitalRead(2);

  // Wenn der Knopf nicht gedrückt wird, wird die gelbe LED eingeschaltet und die roten LEDs ausgschaltet.
  if (SchalterZustand == LOW) {
    digitalWrite(3, HIGH); // Schalten Sie die gelbe LED an Pin 3 ein.
    digitalWrite(4, LOW); // Schalten Sie die rot LED an Pin 4 aus.
    digitalWrite(5, LOW); // Schalten Sie die rot LED an Pin 5 aus.
  }
 // Wenn der Schalter nicht auf LOW steht (der Knopf ist gedrückt), wird die gelbe LED ausgeschaltet und die roten LEDs blinken abwechselnd.
  else {
    digitalWrite(3, LOW); // Schalten Sie die gelbe LED an Pin 3 aus.
    digitalWrite(4, LOW); // Schalten Sie die rot LED an Pin 4 aus.
    digitalWrite(5, HIGH); // Schalten Sie die rot LED an Pin 5 ein.
    // Warten Sie eine Viertelsekunde, bevor Sie das Licht umschalten.
    delay(250);
    digitalWrite(4, HIGH); // Schalten Sie die rot LED an Pin 4 ein.
    digitalWrite(5, LOW); // Schalten Sie die rot LED an Pin 5 aus.
    // Warten Sie eine Viertelsekunde, bevor Sie das Licht umschalten.
    delay(250);
  }
}
