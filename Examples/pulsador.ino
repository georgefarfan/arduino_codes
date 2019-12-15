#define Pulsador 4
#define led 13

int inicio = 0;
int estAC= 0;
int estAN=0;


void setup() {
  // put your setup code here, to run once:
  pinMode(Pulsador,INPUT);
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  estAC = digitalRead(Pulsador);
  if(estAC && estAN == 0){
    inicio = 1 - inicio;
    delay(100);
  }
  estAN = estAC;
  if(inicio==1){
    digitalWrite(led,HIGH);
  }else{
    digitalWrite(led,LOW);
  }
  
  
}
