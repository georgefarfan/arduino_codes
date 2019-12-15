
int led11=11;
int led12=12;
int led13=13;

void setup() {
  // put your setup code here, to run once:
  pinMode(led11,OUTPUT);
  pinMode(led12,OUTPUT);
  pinMode(led13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(11,LOW);
  delay(280);
  digitalWrite(11,HIGH);
  delay(280);
 
}
