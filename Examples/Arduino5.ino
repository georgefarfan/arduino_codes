int ledPin = 13;         // Pin controlado por PWM 
int array_1={11,12,13};

void setup(){
    pinMode(ledPin,OUTPUT);
  } 
void loop() { 
   for (int i=0; i<=255; i++){ 
      analogWrite(ledPin, i);   // Establece el brillo a i 
      delay(10);         // Pausa de 100 ms 
   } 
   for (int i=255; i>=0; i--) { 
      analogWrite(ledPin, i); 
      delay(10); 
   } 
}

int func(){
  
}

