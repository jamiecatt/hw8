void setup() {
  // Initialize digital pin LED_BUILTIN as an output.
  pinMode(5, OUTPUT);
  pinMode(9, OUTPUT);
}
// Two ledPins blinking simultaneously to signify love.
// The loop function runs over and over again forever
void loop() {
  digitalWrite(5, HIGH);   // Turn the LED on (HIGH is the voltage level)
  delay(100);                 
  digitalWrite(5, LOW);    // Turn the LED off by making the voltage LOW
  delay(50);        

  digitalWrite(9, HIGH);   // Turn the LED on (HIGH is the voltage level)
  delay(300);        
  digitalWrite(9, LOW);    // Turn the LED off by making the voltage LOW
  delay(100);     
}
