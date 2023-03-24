#include <LiquidCrystal.h>
//inizializzo il pin RS, E, D4; D5, D6, D7
LiquidCrystal Davide(12, 11, 8, 7, 6, 5);

void setup() {
  Serial.begin(9600);
  //grandezza display (16 colonne e 2 righe)
  Davide.begin(16,2); 
}


void loop() {
  // setCursor(riga,colonna)
  Davide.setCursor(0,0);
  Davide.print("CIAO SILVIO");
  Davide.setCursor(0,1);
  Davide.print("da pupi <3");

}
