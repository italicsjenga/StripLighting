#include <Adafruit_NeoPixel.h>

#define PIN 6

Adafruit_NeoPixel strip = Adafruit_NeoPixel(30, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  // put your setup code here, to run once:
  strip.begin();
  //strip.setBrightness(50);
  strip.show();
}

void loop() {
  // put your main code here, to run repeatedly:
  /*for(int j=100; j<256; j++)
  {
    for(int i=0; i<30; i++)
    {
      strip.setPixelColor(i, j * (52 + (i * 7)), 0, j * ((255-i) * 7));
    }
    strip.show();
  
    delay(100);
  }*/
  strip.setPixelColor(0, 255, 255, 255);
  strip.show();
  delay(100);

  /*for(int i=0; i<30; i++)
  {
    strip.setPixelColor(i, 0, 0, 0);
  }
  strip.show();

  delay(100);*/
}
