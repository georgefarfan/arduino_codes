int led_sup_1 = 2;
int led_sup_2 = 3;
int led_sup_3 = 4;
int led_sup_4 = 5;


int led_inf_1 = 6;
int led_inf_2 = 7;

int led_point = 10;


void setup() {

  pinMode(led_sup_1, OUTPUT);

  pinMode(led_sup_2, OUTPUT);

  pinMode(led_sup_3, OUTPUT);

  pinMode(led_sup_4, OUTPUT);

  pinMode(led_inf_1, OUTPUT);

  pinMode(led_inf_2, OUTPUT);

  pinMode(led_point, OUTPUT);


}


void loop() {


  //numero cero
  digitalWrite(led_sup_1, HIGH);
  digitalWrite(led_sup_2, HIGH);
  digitalWrite(led_sup_3, HIGH);
 
  
  digitalWrite(led_inf_1, HIGH);
  digitalWrite(led_inf_2, HIGH);

  digitalWrite(led_point, HIGH);

  delay(1000);
  
  digitalWrite(led_sup_1, LOW);
  digitalWrite(led_sup_2, LOW);
  digitalWrite(led_sup_3, LOW);
  digitalWrite(led_inf_1, LOW);
  digitalWrite(led_inf_2, LOW);
  digitalWrite(led_point, LOW);



  //numero uno
  digitalWrite(led_sup_1, HIGH);
 
  digitalWrite(led_inf_2, HIGH);

  digitalWrite(led_point, HIGH);

  delay(1000);
   digitalWrite(led_sup_1, LOW);
 
  digitalWrite(led_inf_2, LOW);
 
  digitalWrite(led_point, LOW);





  //numero dos
  digitalWrite(led_sup_1, HIGH);
  digitalWrite(led_sup_3, HIGH);
  digitalWrite(led_sup_4, HIGH);
  
  digitalWrite(led_inf_1, HIGH);
  
  digitalWrite(led_point, HIGH);

  delay(1000);
  digitalWrite(led_sup_4, LOW);
  digitalWrite(led_sup_1, LOW);
  digitalWrite(led_sup_3, LOW);
  
  digitalWrite(led_inf_1, LOW);


    //Numero 4
  
    //numero cero
  digitalWrite(led_sup_1, HIGH);

 
  digitalWrite(led_sup_2, HIGH);
 
  digitalWrite(led_sup_4, HIGH);
 
  digitalWrite(led_inf_2, HIGH);
 
  digitalWrite(led_point, HIGH);

    delay(1000);

    
  digitalWrite(led_sup_2, LOW);
 
  digitalWrite(led_sup_4, LOW);
 
  digitalWrite(led_sup_1, LOW);
 
  digitalWrite(led_sup_3, LOW);
 
  digitalWrite(led_inf_2, LOW);
  

  //Numero 6
    //numero cero
  digitalWrite(led_sup_2, HIGH);
  digitalWrite(led_sup_3, HIGH);
  digitalWrite(led_sup_4, HIGH);
  
  digitalWrite(led_inf_1, HIGH);
  digitalWrite(led_inf_2, HIGH);
 
  digitalWrite(led_point, HIGH);

    delay(1000);
  digitalWrite(led_sup_2, LOW);
  digitalWrite(led_sup_3, LOW);
  digitalWrite(led_sup_4, LOW);
  
  digitalWrite(led_inf_1, LOW);
  digitalWrite(led_inf_2, LOW);
  
  digitalWrite(led_point, LOW);


  //Numero 7
  
    //numero cero
  digitalWrite(led_sup_1, HIGH);
 
  digitalWrite(led_sup_3, HIGH);
 
  digitalWrite(led_inf_2, HIGH);
 
  digitalWrite(led_point, HIGH);

    delay(1000);
  digitalWrite(led_sup_1, LOW);
 
  digitalWrite(led_sup_3, LOW);
 
  digitalWrite(led_inf_2, LOW);
  

  //Numero 8
    //numero cero
  digitalWrite(led_sup_1, HIGH);
  digitalWrite(led_sup_2, HIGH);
  digitalWrite(led_sup_3, HIGH);
  digitalWrite(led_sup_4, HIGH);
  digitalWrite(led_inf_1, HIGH);
  digitalWrite(led_inf_2, HIGH);
  digitalWrite(led_point, HIGH);

    delay(1000);
  digitalWrite(led_sup_1, LOW);
  digitalWrite(led_sup_2, LOW);
  digitalWrite(led_sup_3, LOW);
  digitalWrite(led_sup_4, LOW);
  digitalWrite(led_inf_1, LOW);
  digitalWrite(led_inf_2, LOW);
  digitalWrite(led_point, LOW);



    //Numero 9
    //numero cero
  digitalWrite(led_sup_1, HIGH);
  digitalWrite(led_sup_2, HIGH);
  digitalWrite(led_sup_3, HIGH);
  digitalWrite(led_sup_4, HIGH);

  digitalWrite(led_inf_2, HIGH);
  digitalWrite(led_point, HIGH);

    delay(1000);
  digitalWrite(led_sup_1, LOW);
  digitalWrite(led_sup_2, LOW);
  digitalWrite(led_sup_3, LOW);
  digitalWrite(led_sup_4, LOW);

  digitalWrite(led_inf_2, LOW);
  digitalWrite(led_point, LOW);
  

}
