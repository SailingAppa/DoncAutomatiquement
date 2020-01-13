/*
  Button SOS

  Initiate SOS Sequence when the button is pushed

  The circuit:
  - LED attached from pin 13 to ground
  - pushbutton attached to pin 2 from +5V
  - 10K resistor attached to pin 2 from ground

  - Note: on most Arduinos there is already an LED on the board
    attached to pin 13.

  created 2005
  by DojoDave <http://www.0j0.org>
  modified 30 Aug 2011
  by Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Button
*/

// constants won't change. They're used here to set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // Initiate Loop SOS sequence:
    /*
   * Letter "S" : Three dots
   */
  digitalWrite(LED_BUILTIN, HIGH);   // light on, 
  delay(1000);                       // wait for a second,
  digitalWrite(LED_BUILTIN, LOW);    // Light off
  delay(1000);                       // wait for a second
   /* That's the first dot*/
  digitalWrite(LED_BUILTIN, HIGH);   // light on 
  delay(1000);                       // wait for a second,
  digitalWrite(LED_BUILTIN, LOW);    // Light off
  delay(1000);                       // wait for a second
   /* That's the second dot*/
 digitalWrite(LED_BUILTIN, HIGH);   // light on 
  delay(1000);                       // wait for a second,
  digitalWrite(LED_BUILTIN, LOW);    // Light off
/* That's the third dot, now wait for three second for the end of the letter*/
  delay(3000);                       // wait for three second
  /*
  *Now Letter "O" : Three Dashes
  */
  digitalWrite(LED_BUILTIN, HIGH);   // light on, first dash
  delay(3000);                       // wait for three seconds 
  digitalWrite(LED_BUILTIN, LOW);    // Light off
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, HIGH);   // light on, second dash
  delay(3000);                       // wait for three seconds
  digitalWrite(LED_BUILTIN, LOW);    // Light off
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, HIGH);   // light on, third dash
  delay(3000);                       // wait for three seconds  
  digitalWrite(LED_BUILTIN, LOW);    // Light off
  delay(3000);                       // end of the letter, wait for three second
  /*
   * Letter "S" : Three dots
   */
  digitalWrite(LED_BUILTIN, HIGH);   // light on, 
  delay(1000);                       // wait for a second,
  digitalWrite(LED_BUILTIN, LOW);    // Light off
  delay(1000);                       // wait for a second
   /* That's the first dot*/
  digitalWrite(LED_BUILTIN, HIGH);   // light on 
  delay(1000);                       // wait for a second,
  digitalWrite(LED_BUILTIN, LOW);    // Light off
  delay(1000);                       // wait for a second
   /* That's the second dot*/
 digitalWrite(LED_BUILTIN, HIGH);   // light on 
  delay(1000);                       // wait for a second,
  digitalWrite(LED_BUILTIN, LOW);    // Light off
/* That's the third dot, wait for 7 seconds for the end of the word*/
  delay(7000);                       // wait for seven seconds
  } 
  else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }
}
