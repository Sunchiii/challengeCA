int sensorPin = A0;   
int sensorValue = 0; 
int LED = A1;

void setup() {
  pinMode(LED ,OUTPUT);
  pinMode(sensorPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  
  analogWrite(LED , sensorValue);
  delay(100);
}
