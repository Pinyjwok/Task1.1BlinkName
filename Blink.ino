const int ledPin = 13;      // LED pin assigned to digital pin 13
const int buttonPin = 2;    // Button pin assigned to digital pin 2

int buttonState = 0;        // Start button not pushed

void setup() {
  pinMode(ledPin, OUTPUT);   // Initialize LED pin as an output
  pinMode(buttonPin, INPUT); // Initialize button pin as an input
}

void dash() {
  digitalWrite(ledPin, HIGH);  // Turn the LED on
  delay(1000);                  // Wait for 1 second
  digitalWrite(ledPin, LOW);   // Turn the LED off
  delay(500);                   // Wait for 0.5 seconds
}

void dot() {
  digitalWrite(ledPin, HIGH);  // Turn the LED on
  delay(500);                   // Wait for 0.5 seconds
  digitalWrite(ledPin, LOW);   // Turn the LED off
  delay(500);                   // Wait for 0.5 seconds
}

void space() {
  delay(2000);                  // Wait for 2 seconds
}

void loop() {
  buttonState = digitalRead(buttonPin);  // Read the state of the button
  
  if (buttonState == HIGH) {

    // 'i' in Morse code
    digitalWrite(ledPin, LOW);
    dash(); 
    dash(); 
    dot();
    space();

    // 'i' in Morse code
    dot();
    dot();
    space();

    // 'n' in Morse code 
    dash();
    dot();
    space();

    // 'y' in Morse code 
    dash();
    dot();
    dash();
    dash();
    space();
  }
  

}

