#define sangatCepat 50
#define cepat 100
#define pas 100
#define lumayan 100
#define speedPola1 80

const int pinTerkecil = 2;
const int pinTerbesar = 13;

void setup() {
  DDRD = DDRD | B11111100;
  DDRB = DDRB | B00111111;
}

void loop() {

  pola1();
  pola2();
  pola3();
  

}

void gerakKiri() {
  PORTD = B10000000;
  delay(lumayan);
  PORTD = B01000000;
  delay(lumayan);
  PORTD = B00100000;
  delay(lumayan);
  PORTD = B00010000;
  delay(lumayan);
  PORTD = B00001000;
  delay(lumayan);
  PORTD = B00000100;
  delay(lumayan);
  PORTD = B00000000;
}

void penuhKiriNormal() {
  PORTD = B10000000;
  delay(lumayan);
  PORTD = B01000000;
  delay(lumayan);
  PORTD = B00100000;
  delay(lumayan);
  PORTD = B00010000;
  delay(lumayan);
  PORTD = B00001000;
  delay(lumayan);
  PORTD = B00000100;
  delay(lumayan);

  PORTD = B10000100;
  delay(lumayan);
  PORTD = B01000100;
  delay(lumayan);
  PORTD = B00100100;
  delay(lumayan);
  PORTD = B00010100;
  delay(lumayan);
  PORTD = B00001100;
  delay(lumayan);

  PORTD = B10001100;
  delay(lumayan);
  PORTD = B01001100;
  delay(lumayan);
  PORTD = B00101100;
  delay(lumayan);
  PORTD = B00011100;
  delay(lumayan);


  PORTD = B10011100;
  delay(lumayan);
  PORTD = B01011100;
  delay(lumayan);
  PORTD = B00111100;
  delay(lumayan);


  PORTD = B10111100;
  delay(lumayan);
  PORTD = B01111100;
  delay(lumayan);

  PORTD = B11111100;
  delay(8000);
}

void penuhKiriPola2() {
  PORTD = B10000000;
  delay(pas);
  PORTD = B01000000;
  delay(pas);
  PORTD = B00100000;
  delay(pas);
  PORTD = B00010000;
  delay(pas);
  PORTD = B00001000;
  delay(pas);
  PORTD = B00000100;
  delay(pas);
  PORTD = B00001000;
  delay(pas);
  PORTD = B00010000;
  delay(pas);
  PORTD = B00001000;
  delay(pas);
  PORTD = B00000100;
  delay(pas);

  PORTD = B10000100;
  delay(pas);
  PORTD = B01000100;
  delay(pas);
  PORTD = B00100100;
  delay(pas);
  PORTD = B00010100;
  delay(pas);
  PORTD = B00001100;
  delay(pas);
  PORTD = B00010100;
  delay(pas);
  PORTD = B00100100;
  delay(pas);
  PORTD = B00010100;
  delay(pas);
  PORTD = B00001100;
  delay(pas);

  PORTD = B10001100;
  delay(pas);
  PORTD = B01001100;
  delay(pas);
  PORTD = B00101100;
  delay(pas);
  PORTD = B00011100;
  delay(pas);
  PORTD = B00101100;
  delay(pas);
  PORTD = B01001100;
  delay(pas);
  PORTD = B00101100;
  delay(pas);
  PORTD = B00011100;


  PORTD = B10011100;
  delay(pas);
  PORTD = B01011100;
  delay(pas);
  PORTD = B00111100;
  delay(pas);
  PORTD = B01011100;
  delay(pas);
  PORTD = B10011100;
  delay(pas);
  PORTD = B01011100;
  delay(pas);
  PORTD = B00111100;
  delay(pas);


  PORTD = B10111100;
  delay(pas);
  PORTD = B01111100;
  delay(pas);
  PORTD = B10111100;
  delay(pas);
  PORTD = B01111100;
  delay(pas);

  PORTD = B11111100;
  delay(8000);
}

void pola1() {
  PORTB = B00000000;
  gerakKiri();
  PORTB = B00100000;
  delay(speedPola1);
  PORTB = B00010000;
  delay(speedPola1);
  PORTB = B00001000;
  delay(speedPola1);
  PORTB = B00000100;
  delay(speedPola1);
  PORTB = B00000010;
  delay(speedPola1);
  PORTB = B00000001;
  delay(speedPola1);

  gerakKiri();
  PORTB = B00100001;
  delay(speedPola1);
  PORTB = B00010001;
  delay(speedPola1);
  PORTB = B00001001;
  delay(speedPola1);
  PORTB = B00000101;
  delay(speedPola1);
  PORTB = B00000011;
  delay(speedPola1);

  gerakKiri();
  PORTB = B00100011;
  delay(speedPola1);
  PORTB = B00010011;
  delay(speedPola1);
  PORTB = B00001011;
  delay(speedPola1);
  PORTB = B00000111;
  delay(speedPola1);

  gerakKiri();
  PORTB = B00100111;
  delay(speedPola1);
  PORTB = B00010111;
  delay(speedPola1);
  PORTB = B00001111;
  delay(speedPola1);

  gerakKiri();
  PORTB = B00101111;
  delay(speedPola1);
  PORTB = B00011111;
  delay(speedPola1);

  gerakKiri();
  PORTB = B00111111;
  delay(speedPola1);
  
  penuhKiriNormal();
}

void pola2() { 
  PORTB = B00000000;  
  gerakKiri();
  PORTB = B00100000;
  delay(pas);
  PORTB = B00010000;
  delay(pas);
  PORTB = B00001000;
  delay(pas);
  PORTB = B00000100;
  delay(pas);
  PORTB = B00000010;
  delay(pas);
  PORTB = B00000001;
  delay(pas);
  PORTB = B00000010;
  delay(pas);
  PORTB = B00000100;
  delay(pas);
  PORTB = B00000010;
  delay(pas);
  PORTB = B00000001;
  delay(pas);

  gerakKiri();
  PORTB = B00100001;
  delay(pas);
  PORTB = B00010001;
  delay(pas);
  PORTB = B00001001;
  delay(pas);
  PORTB = B00000101;
  delay(pas);
  PORTB = B00000011;
  delay(pas);
  PORTB = B00000101;
  delay(pas);
  PORTB = B00001001;
  delay(pas);
  PORTB = B00000101;
  delay(pas);
  PORTB = B00000011;
  delay(pas);

  gerakKiri();
  PORTB = B00100011;
  delay(pas);
  PORTB = B00010011;
  delay(pas);
  PORTB = B00001011;
  delay(pas);
  PORTB = B00000111;
  delay(pas);
  PORTB = B00001011;
  delay(pas);
  PORTB = B00010011;
  delay(pas);
  PORTB = B00001011;
  delay(pas);
  PORTB = B00000111;
  delay(pas);

  gerakKiri();
  PORTB = B00100111;
  delay(pas);
  PORTB = B00010111;
  delay(pas);
  PORTB = B00001111;
  delay(pas);
  PORTB = B00010111;
  delay(pas);
  PORTB = B00100111;
  delay(pas);
  PORTB = B00010111;
  delay(pas);
  PORTB = B00001111;
  delay(pas);

  gerakKiri();
  PORTB = B00101111;
  delay(pas);
  PORTB = B00011111;
  delay(pas);
  PORTB = B00101111;
  delay(pas);
  PORTB = B00011111;
  delay(pas);

  gerakKiri();
  PORTB = B00111111;
  delay(pas);
  PORTD = B00000100;
  delay(pas);
  PORTD = B00001000;
  delay(pas);
  PORTD = B00000100;
  delay(pas);
  PORTB = B00111111;
  delay(pas);
  
  penuhKiriPola2();
}

void pola3() {
  PORTB = B00000000;
  PORTD = B10000000;
  delay(lumayan);
  PORTD = B11000000;
  delay(lumayan);
  PORTD = B11100000;
  delay(lambat);
  
  PORTD = B11110000;
  delay(lumayan);  
  PORTD = B11111000;
  delay(lumayan);  
  PORTD = B11111100;
  delay(lumayan); 
  PORTB = B00100000;
  delay(lumayan); 
  PORTB = B00110000;
  delay(lumayan);
  PORTB = B00111000;
  delay(lambat);

  PORTB = B00111100;
  delay(lumayan);
  PORTB = B00111110;
  delay(lumayan);
  PORTB = B00111111;
  delay(lambat);

  PORTB = B00000000;
  PORTD = B10000000;
  delay(cepat);
  PORTD = B11000000;
  delay(cepat);
  PORTD = B11100000;
  delay(cepat);
  
  PORTD = B11110000;
  delay(sangatCepat);  
  PORTD = B11111000;
  delay(sangatCepat);  
  PORTD = B11111100;
  delay(sangatCepat); 
  PORTB = B00100000;
  delay(sangatCepat); 
  PORTB = B00110000;
  delay(sangatCepat);
  PORTB = B00111000;
  delay(sangatCepat);

  PORTB = B00111100;
  delay(sangatCepat);
  PORTB = B00111110;
  delay(sangatCepat);
  PORTB = B00111111;
  delay(8000);



}

