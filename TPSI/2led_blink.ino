// Autore: Mattia Baroni
// Data: 19.12.21
// Scopo: Lo script utilizza le corrispettive porte:
//      porta 2 e 3: led 1 (rosso),
//      porta 12 e 13: led 2 (verde),
//lo scopo è quello di alternare l'accensione del led 1 e del led 2.

void setup(){
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(12,OUTPUT);
pinMode(13,OUTPUT);

}

void loop(){

//blink 1 (10-11)

digitalWrite(2,LOW);
digitalWrite(3,HIGH);
delay(500);
digitalWrite(2,HIGH);
digitalWrite(3,LOW);
delay(500);


//blink 2 (12-13):

digitalWrite(12,LOW);
digitalWrite(13,HIGH);
delay(500);
digitalWrite(12,HIGH);
digitalWrite(13,LOW);
delay(500);
}
