void setup() {
  // Initialize digital pin LED_BUILTIN as an output.
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
}
//All ledPins blink to signify urgent matter.
// The loop function runs over and over again forever
void loop() {
  digitalWrite(5, HIGH);   // Turn the LED on (HIGH is the voltage level)
  delay(100);                
  digitalWrite(5, LOW);    // Turn the LED off by making the voltage LOW
  delay(50);        
  digitalWrite(6, HIGH);   // Turn the LED on (HIGH is the voltage level)
  delay(100);                 
  digitalWrite(6, LOW);    // Turn the LED off by making the voltage LOW
  delay(50);     
  digitalWrite(9, HIGH);   // Turn the LED on (HIGH is the voltage level)
  delay(100);                  
  digitalWrite(9, LOW);    // Turn the LED off by making the voltage LOW
  delay(50); 

}
