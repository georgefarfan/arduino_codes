double value_water;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  value_water = analogRead(2);
  value_water = (value_water*100)/630;

  if(value_water > 100){
    value_water = 100;
  }

  Serial.print("El nivel de agua es :");
  Serial.println(value_water);

  delay(100);
}
