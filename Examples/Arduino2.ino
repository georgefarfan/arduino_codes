
void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0; i <= 255; i++){
    analogWrite(13,i);  
    analogWrite(12,i);  
    analogWrite(11,i);  
    delay(10);
  }
}
