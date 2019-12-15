/*CODIGO RELIZADO POR SALVADOR RUIZ SEDEÑO
PAGINA WEB: WWW.FROSTCODE.ES
VIDEOTUTORIAL DEL CODIGO EN YOUTUBE AQUI: https://www.youtube.com/watch?v=7_ysvfLmBww
*/


int tr = 11;//INICIAMOS EL TRIGGER (DISPARADOR)
int ech = 12;//INICIAMOS EL ECHO (RECEPTOR)
float tiempoderebote;//VARIABLE DONDE GUARDAREMOS EL TIEMPO QUE TARDA EN REBOTAR EL PULSO
float distancia;//VARIABLE DONDE ALMACENAREMOS LA DISTANCIA

void setup()
{
  pinMode(tr,OUTPUT);//PIN DEL DISPARADOR COMO SALIDA
  pinMode(ech,INPUT);//PIN DEL RECEPTOR COMO ENTRADA
  Serial.begin(9600);//INICIAMOS EL SERIAL A 9600
}


void loop()
{
 digitalWrite(tr,HIGH);//DISPARAMOS EL PULSO
 tiempoderebote = pulseIn(ech,HIGH);//MEDIMOS EL TIEMPO QUE TARDA EN VOLVER Y SER RECIBIDO POR EL RECEPTOR (ECHO)
 distancia = tiempoderebote*0.017;//FORMULA QUE TRASFORMA EL TIEMPO QUE HA TARDADO EN VOLVER EL PULSO EN CM
 Serial.print("La distancia es de: ");//MENSAJE SERIAL
 Serial.print(distancia);//IMPRIMIMOS LA DISTANCIA
 Serial.println(" Cm");//PONEMOS LA UNIDAD
 delay(500);//Y UN DELAY
}
