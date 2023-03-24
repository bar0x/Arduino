#include <LiquidCrystal.h>

//inizializzo il pin RS, E, D4; D5, D6, D7
LiquidCrystal Davide(12, 11, 8, 7, 6, 5);
int i;



void setup() {
  Serial.begin(9600);
  Davide.begin(16,2); //grandezza display (16 colonne e 2 righe)
}

void loop() {
  // posiziono il cursore nella seconda riga 5 colonna

  Davide.setCursor(1,0);
  Davide.print("ESPLOSIONE IN:");
  
  Davide.setCursor(5,2);
  for (i=60; i>0; i--){
     Davide.setCursor(7,2);
     Davide.print("  ");
     Davide.setCursor(7,2);
     Davide.print(i);
     delay(1000);
  }

  //post scoppio fase
  Davide.clear();
  Davide.setCursor(6,0);
  Davide.print("BOOM");

  delay(20000);

  Davide.clear();
}
