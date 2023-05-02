//https://www.tinkercad.com/things/7uTM7vRn9pI-magnificent-elzing/editel
//https://www.youtube.com/watch?v=BYKQ9rk0FEQ&ab_channel=ProgrammingElectronicsAcademy


#define a 7
#define b 6
#define c 5
#define d 4
#define e 3

//costante pulsanti
#define faster = 8;
#define slower = 2;

void setup() {
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  
  //definizione pulsanti
  pinMode(8,INPUT);
  pinMode(2,INPUT);

  int leds[5]= {3, 4, 5, 6, 7};
  int i = 0;
  unsigned long tempoCorrente;
  unsigned long tempoPrecedente;
  unsigned long intervallo= 500;
}


void loop() {
    if (tempoCorrente - tempoPrecedente>= intervallo)
      
}

int turnLed(int led, unsigned long tempo){
    unsigned long _tempoCorrente = millis();
    digitalWrite(led, HIGH);
    while(tempoCorrente-tempoPrecedente <intervallo){
      serial.println("waiting for delay");
      }
    
  }
