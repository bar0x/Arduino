// C++ code
//

const int Do  = 13;
const int Re  = 12;
const int Mi  = 11;
const int Fa  = 10;
const int Sol = 9;
const int La  = 7;
const int Si  = 6;

void setup()
{
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
}


// 500 millisecondi di accensione, 1 secondo di ritardo.

//DO RE MI DO 
//DO RE MI DO

//MI FA SOL
//MI FA SOL

//SOL LA SOL FA MI DO
//SOL LA SOL FA MI DO 

//RE RE DO
//RE RE DO
  
  
void loop()
{
  // DO RE MI DO
  digitalWrite(Do, HIGH);
  delay(300);
  digitalWrite(Do, LOW);

  digitalWrite(Re, HIGH);
  delay(300);
  digitalWrite(Re, LOW);

  digitalWrite(Mi, HIGH);
  delay(300);
  digitalWrite(Mi, LOW);

  digitalWrite(Do, HIGH);
  delay(300);
  digitalWrite(Do, LOW);


  digitalWrite(Do, HIGH);
  delay(300);
  digitalWrite(Do, LOW);

  digitalWrite(Re, HIGH);
  delay(300);
  digitalWrite(Re, LOW);

  digitalWrite(Mi, HIGH);
  delay(300);
  digitalWrite(Mi, LOW);

  digitalWrite(Do, HIGH);
  delay(300);
  digitalWrite(Do, LOW);

  //MI FA SOL 
  //MI FA SOL

  digitalWrite(Mi, HIGH);
  delay(300);
  digitalWrite(Mi, LOW);

  digitalWrite(Fa, HIGH);
  delay(300);
  digitalWrite(Fa, LOW);
  
  digitalWrite(Sol, HIGH);
  delay(300);
  digitalWrite(Sol, LOW);


  digitalWrite(Mi, HIGH);
  delay(300);
  digitalWrite(Mi, LOW);

  digitalWrite(Fa, HIGH);
  delay(300);
  digitalWrite(Fa, LOW);
  
  digitalWrite(Sol, HIGH);
  delay(300);
  digitalWrite(Sol, LOW);

  
  //SOL LA SOL FA MI DO
  //SOL LA SOL FA MI DO 

  digitalWrite(Sol, HIGH);
  delay(300);
  digitalWrite(Sol, LOW);

  digitalWrite(La, HIGH);
  delay(300);
  digitalWrite(La, LOW);

  digitalWrite(Sol, HIGH);
  delay(300);
  digitalWrite(Sol, LOW);

  digitalWrite(Fa, HIGH);
  delay(300);
  digitalWrite(Fa, LOW);

  digitalWrite(Mi, HIGH);
  delay(300);
  digitalWrite(Mi, LOW);

  digitalWrite(Do, HIGH);
  delay(300);
  digitalWrite(Do, LOW);



  digitalWrite(Sol, HIGH);
  delay(300);
  digitalWrite(Sol, LOW);

  digitalWrite(La, HIGH);
  delay(300);
  digitalWrite(La, LOW);

  digitalWrite(Sol, HIGH);
  delay(300);
  digitalWrite(Sol, LOW);

  digitalWrite(Fa, HIGH);
  delay(300);
  digitalWrite(Fa, LOW);

  digitalWrite(Mi, HIGH);
  delay(300);
  digitalWrite(Mi, LOW);

  digitalWrite(Do, HIGH);
  delay(300);
  digitalWrite(Do, LOW);  


  //RE RE DO 
  //RE RE DO

  digitalWrite(Re, HIGH);
  delay(300);
  digitalWrite(Re, LOW);

  digitalWrite(Re, HIGH);
  delay(300);
  digitalWrite(Re, LOW);

  digitalWrite(Do, HIGH);
  delay(300);
  digitalWrite(Do, LOW);


  digitalWrite(Re, HIGH);
  delay(300);
  digitalWrite(Re, LOW);

  digitalWrite(Re, HIGH);
  delay(300);
  digitalWrite(Re, LOW);

  digitalWrite(Do, HIGH);
  delay(300);
  digitalWrite(Do, LOW);

  delay(5000);
}
