void setup() {
  // Initialize digital pin LED_BUILTIN as an output.
  pinMode(5, OUTPUT);
}

// The loop function runs over and over again forever
void loop() {
  digitalWrite(5, HIGH);   // Turn the LED on (HIGH is the voltage level)
  delay(700);                      // Long delay to notify appointment. 
  digitalWrite(5, LOW);    // Turn the LED off by making the voltage LOW
  delay(100);                    
}
