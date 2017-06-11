/*
  LiquidCrystal Library - Blink

 Demonstrates the use a 16x2 LCD display.  The LiquidCrystal
 library works with all LCD displays that are compatible with the
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.

 This sketch prints "Hello World!" to the LCD and makes the
 cursor block blink.

 The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * 10K resistor:
   * ends to +5V and ground
   * wiper to LCD VO pin (pin 3)

 Library originally added 18 Apr 2008
 by David A. Mellis
 library modified 5 Jul 2009
 by Limor Fried (http://www.ladyada.net)
 example added 9 Jul 2009
 by Tom Igoe
 modified 22 Nov 2010
 by Tom Igoe

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/LiquidCrystalBlink

 */

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // plug it in corrently to arduino platform!

void setup() {
  lcd.begin(16, 2);   // set up the LCD's number of columns and rows:
  Serial.begin(9600); 
  lcd.setCursor(0,0);
}

void loop() {
  int humidityOfJolokia = analogRead(A0); //Analog pin number 0 
  int humidityOfHabanero = analogRead(A2);// Analog pin number 2
  lcd.print("Jolokia:  ");
  lcd.print(humidityOfJolokia);
  lcd.setCursor(0,1);
  lcd.print("Habanero: ");
  lcd.print(humidityOfHabanero);
  delay(300);
  lcd.clear();
}


