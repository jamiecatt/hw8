int sensorPin = A0;    // Select the input pin for the potentiometer    
int sensorValue = 0;  // Variable to store the value coming from the sensor
int ledPin = 5; 
int ledPin2 = 6; 
int ledPin3 = 9;   

void setup() {
  // declare the ledPin as an OUTPUT:
 
pinMode(ledPin, OUTPUT);
pinMode(ledPin2, OUTPUT);
pinMode(ledPin3, OUTPUT);

Serial.begin(9600);
   
}

void loop() {
  // Read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);

  // Turn the ledPin on
if (sensorValue>257.5)
  digitalWrite(ledPin, HIGH);

  if (sensorValue>515)
  digitalWrite(ledPin2, HIGH); 

if (sensorValue>772.5)
  digitalWrite(ledPin3, HIGH); 

  // Turn the ledPin off:
  if(sensorValue<257.5)digitalWrite(ledPin, LOW);
  if(sensorValue<515)digitalWrite(ledPin2, LOW);
  if(sensorValue<772.5)digitalWrite(ledPin3, LOW);
}
