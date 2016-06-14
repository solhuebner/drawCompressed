#include <SPI.h>
#include <EEPROM.h>
#include "Arglib.h"
#include "bitmaps.h"

Arduboy arduboy;

void setup() {
  arduboy.start();
  arduboy.setFrameRate(60);
  
  arduboy.display();
  delay(3000);
}

void loop() {
  if (!(arduboy.nextFrame())) return;
  arduboy.clearDisplay();
  arduboy.drawCompressed(0,0, kitchen_compressed, WHITE);  
  arduboy.display();
}
