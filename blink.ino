int sensorPin = A0;    // select the input pin for the potentiometer
int ledPin = 5; 
int ledPin2 = 6; 
int ledPin3 = 9;       
int sensorValue = 0;  // variable to store the value coming from the sensor

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

    // Make the first ledPin blink: 
  digitalWrite(ledPin, HIGH);
  delay(sensorValue);
  digitalWrite(ledPin, LOW);
  delay(sensorValue);

//Second ledPin
  if (sensorValue>515)
  digitalWrite(ledPin2, HIGH); 

//Third ledPin
if (sensorValue>772.5)
  digitalWrite(ledPin3, HIGH); 

  // Turn the ledPin off:
  if(sensorValue<257.5)digitalWrite(ledPin, LOW);
  if(sensorValue<515)digitalWrite(ledPin2, LOW);
  if(sensorValue<772.5)digitalWrite(ledPin3, LOW);
}
