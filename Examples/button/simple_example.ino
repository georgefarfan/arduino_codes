#define Button 7
#define Led 13

int ini = 0;
int estC = 0;
int estN = 0;

void setup(){
  pinMode(Button,INPUT);
  pinMode(Led,OUTPUT);
}

void loop(){
  estC= digitalRead(Button);
  if(estC && estN == 0){
    ini = 1 - ini;
    delay(100);
  }
  estN = estC;

  if(ini==1){
    digitalWrite(Led,HIGH);
  }else{
    digitalWrite(Led,LOW); 
  }
  
}

