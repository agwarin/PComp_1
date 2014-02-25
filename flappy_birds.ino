
#include <LiquidCrystal.h>


LiquidCrystal lcd(12, 11, 7, 6, 5, 4);
int backLight = 3;    

int zero = 0;
int y=250;

byte flappyTop1[8] = {
  0b00100,
	0b01000,
	0b10001,
  0b00011,
  0b01111,
  0b10000,
  0b10000,
  0b10000
};

byte flappyTop2[8] = {
  0b00000,
  0b01111,
  0b11111,
  0b11110,
  0b11110,
  0b11110,
  0b01110,
  0b00111
};

byte flappyTop3[8] = {
  0b00000,
  0b10000,
  0b01000,
  0b00100,
  0b01010,
  0b01010,
  0b00010,
  0b00010
};

byte flappyBot1[8] = {
  0b10000,
  0b01000,
  0b00111,
  0b10111,
  0b10011,
  0b01000,
  0b00100,
  0b00011
};

byte flappyBot2[8] = {
  0b00111,
  0b11111,
  0b11110,
  0b11111,
  0b11111,
  0b11111,
  0b00000,
  0b00000
};

byte flappyBot3[8] = {
  0b11111,
  0b00001,
  0b11111,
  0b00001,
  0b11110,
  0b00000,
  0b00000,
  0b00000
};

byte wing1[8] = {
  0b00000,
  0b00000,
  0b00001,
  0b00011,
  0b00111,
  0b01111,
  0b10000,
  0b10000
};

byte wing2[8] = {
  0b10000,
  0b01111,
  0b00111,
  0b00111,
  0b00011,
  0b00000,
  0b00000,
  0b00000
};


void setup(){

  pinMode(backLight, OUTPUT);
  digitalWrite(backLight, HIGH);

  lcd.begin(16, 2);
  lcd.clear();

}

void loop() {

  int sensorReading = analogRead(A0);
  int delayTime = map(sensorReading, 0, 1023, 200, 1000);


    flappy();
    

}



void flappy(){

  for (int i=0; i<14; i+=2){
    
    int a=i+1;
    int b=i+2;
    int c=i+3;
    int d=i+1;
    int e=i+2;
    int f=i+3;
    
    
   lcd.clear();
   lcd. setCursor(0,0); 
  lcd.createChar(zero, flappyTop1);
  lcd.createChar(1, flappyTop2);
  lcd.createChar(2, flappyTop3);
  lcd.createChar(3, flappyBot1);
  lcd.createChar(4, flappyBot2);
  lcd.createChar(5, flappyBot3);
  lcd.createChar(6, wing1);
  lcd.createChar(7, wing2);
  
  lcd.setCursor(a,0);
  lcd.write(zero);
    lcd.setCursor(b,0);
  lcd.write(1);
    lcd.setCursor(c,0);
  lcd.write(2);
  lcd.setCursor(a,1);
  lcd.write(3);
    lcd.setCursor(b,1);
  lcd.write(4);
    lcd.setCursor(c,1);
  lcd.write(5);
  delay(y);
  
    lcd.setCursor(d,0);
  lcd.write(6);
    lcd.setCursor(e,0);
  lcd.write(1);
    lcd.setCursor(f,0);
  lcd.write(2);
  lcd.setCursor(d,1);
  lcd.write(7);
    lcd.setCursor(e,1);
  lcd.write(4);
    lcd.setCursor(f,1);
  lcd.write(5);
  delay(y);
  
  }
}


