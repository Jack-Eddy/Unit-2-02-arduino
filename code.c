/* 
 This program turns the LED on the arduino on and off, increasing the time the light stays on each cycle
 Created by: Jack Eddy
 Created on: Febuary 2025
*/

// variables
int blinkTime = 1000;


void setup() {
  // sets LED pin to output
  pinMode(LED_BUILTIN, OUTPUT);
}

// turn built in LED on and off for set time
void loop() {
  
  // turn on for variable time
  digitalWrite(LED_BUILTIN, HIGH);
  delay(blinkTime);
  
  // turn off for one second
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);

  // add one second to blink time
  blinkTime += 1000;
}
