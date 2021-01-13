#include "LiquidCrystal.h"
LiquidCrystal lcd(12,11,5,4,3,2);

int ledpin=13;

void setup() 
{
     Serial.begin (9600);
     pinMode (ledpin, OUTPUT);

     lcd.begin(16, 2);

}

void loop() 
{
     
     
     while (Serial.available() == 0);
     int val = Serial.read();
     char dis = char(val);
     Serial.println(dis);

     lcd.setCursor(0, 0);
     lcd.print(dis);   
     delay(5000);
     lcd.clear();
}
