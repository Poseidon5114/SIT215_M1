
const int Motion_Pin =3;  
const int LED_Pin = 4; 

void setup() {
  pinMode(Motion_Pin, INPUT);
  pinMode(LED_Pin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
  int Motion_detect = digitalRead(Motion_Pin);
  Serial.println(Motion_detect);
  if (Motion_detect == HIGH) {
    digitalWrite(LED_Pin, HIGH); 
    Serial.println("Someone on ground");
    delay(1000); 
  } else {
    digitalWrite(ledPin, LOW); 
  }
}
