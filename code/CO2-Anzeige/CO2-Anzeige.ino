/*************************************************************************************************
                                      PROGRAMMINFO
**************************************************************************************************
Funktion: CO2 und TVOC- Anzeige
TVOC = Flüchtige organische Verbindungen insgesamt
**************************************************************************************************
Version: 17.04.2025
**************************************************************************************************
Board: UNO
**************************************************************************************************
Libraries:
https://github.com/espressif/arduino-esp32/tree/master/libraries
C:\Users\User\Documents\Arduino
D:\gittemp\Arduino II\A156_Wetterdaten_V3
**************************************************************************************************
C++ Arduino IDE 2.3.6

**************************************************************************************************
Einstellungen:
https://dl.espressif.com/dl/package_esp32_index.json
http://dan.drown.org/stm32duino/package_STM32duino_index.json
http://arduino.esp8266.com/stable/package_esp8266com_index.json
**************************************************************************************************/
//Display
#include "SPI.h"
#include "Adafruit_GFX.h"
#include "Adafruit_GC9A01A.h"
#define TFT_DC 7
#define TFT_CS 10
Adafruit_GC9A01A tft(TFT_CS, TFT_DC);

//Sensor
#include "Adafruit_CCS811.h"
Adafruit_CCS811 ccs;

void setup() {
Serial.begin(9600);

tft.begin();
tft.fillScreen(GC9A01A_BLACK);

Serial.println("CCS811 Test");

  if(!ccs.begin()){
    Serial.println("Sensor konnte nicht gestartet werden! Bitte überprüfe die Verkabelung.");
    while(1);
  }

  // Warte, bis der Sensor bereit ist
  while(!ccs.available());
}

void loop(void) {

  if(ccs.available()){
    if(!ccs.readData()){
      Serial.print("CO2: ");
      Serial.print(ccs.geteCO2()); //CO2-Wert
      Serial.print("ppm, TVOC: "); //Flüchtige organische Verbindungen insgesamt
      Serial.println(ccs.getTVOC());
    }
    else{
      Serial.println("ERROR!");
      while(1);
    }
  }
  delay(500);



unsigned long start = micros();

displayText();
}

void displayText() {
//tft.fillScreen(GC9A01A_BLACK);
tft.setCursor(55, 90);
tft.setTextColor(GC9A01A_WHITE); tft.setTextSize(3);
tft.println("CO2-Wert");
tft.setCursor(60, 140);
tft.fillRect(10, 140,   250, 150, (GC9A01A_BLACK));// Pos x,y Länge, Breite
//tft.setTextColor(GC9A01A_RED); tft.setTextSize(3);
tft.setCursor(60, 140);
tft.print(ccs.geteCO2());
tft.print(" ppm");
tft.setCursor(60, 170);
tft.print(ccs.getTVOC()); //Flüchtige organische Verbindungen insgesamt
tft.print(" TVOC"); 



delay(3000);
}

