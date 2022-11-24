int pinoSensor = 2 ;
int pinoLampada = 4 ;

 void setup()
{
 pinMode(pinoSensor, INPUT) ;
 pinMode(pinoLampada, OUTPUT) ;
}

void loop  (){

 
 if(digitalRead(pinoSensor)== HIGH)
  {
   digitalWrite(pinoLampada, HIGH) ;
 }

 else
 {
 digitalWrite(pinoLampada, LOW) ;
 }

}