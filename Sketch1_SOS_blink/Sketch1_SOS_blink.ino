/*SOS Blink, very first project of Clément Leroy, Boat Captain.
 * I'll basicaly just adapt the basic code "Blink" of arduino
 * SOS : three short, three long, three short
 * International Morse Code
 * 1 dash = 3 dots
 * The space between parts of the same letter = 1 dot
 * The space between letters = 3 dots
 * The space between words = 7 dots
 * SOS : ...---...
 * three dots, three dashes, three dots
 * 
 * In this code one dot = one second
 * 
 */
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() { 
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
