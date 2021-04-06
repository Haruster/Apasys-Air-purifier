//Kinesys Air Purifier.c
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
    
}
