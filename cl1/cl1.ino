// C++ code
// dis
int btnPin = 2; 
bool btnState = 0;
int num =0;
int LED1 = 3 , LED2 = 4;

void setup() {
  pinMode(btnPin ,INPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
    btnState = digitalRead(btnPin);
    
  if(btnState == 1){
     digitalWrite(LED1, HIGH);
     digitalWrite(LED2, LOW);
  }
  else{
     digitalWrite(LED1, LOW);
     digitalWrite(LED2, HIGH);
  }
}
