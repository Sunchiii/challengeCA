int btnPin = 2;   
int btnState = 0;
int Previous = 0;
int num =0;

void setup() {
  pinMode(btnPin ,INPUT);
  Serial.begin(9600);
}

void loop() {
    btnState = digitalRead(btnPin);

  if(btnState == HIGH && Previous == LOW){
    num ++;
    Serial.print("CountPress = ");
    Serial.println(num);
  }
  
  Previous = btnState;
}
