//Apasys Air Purifier.c
//Arduino Project

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

float Vo = 0;
float Voc = 0;
float DD = 0;
float AvgDD = 0;
float SumDD = 0;
int count = 0;

LiquidCrystal_I2C lcd(0x27, 16, 2);


void setup() {
    
    pinMode(1, OUTPUT);
    pinMode(A0, INPUT);
    pinMode(4, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);

    Serial.begin(9600);

    lcd.init();
    lcd.backlight();

}

void loop() {

    digitalWrite(2, LOW); //미세먼지 센서의 LED에 LOW값을 출력한다.


}

    count += 1;
    lcd.clear();
    
