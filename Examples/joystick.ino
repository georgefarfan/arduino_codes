int led = 11;
int ejeX= A0;
int ejeY=A1;


void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  //Imprimo el movimiento del control
  
  int read_x = analogRead(ejeX);
  int read_y = analogRead(ejeY);
  
  read_x = map(read_x,0,1024,0,read_y);
  analogWrite(led,read_x);
}
