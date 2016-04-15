#include <FastLED.h>

#define NUM_LEDS 30
#define DATA_PIN 6

int DELAY = 50;
#define FULLSPECTRUM true

#define BRIGHTNESS 255

CRGB leds[NUM_LEDS];

int im_hue = 0;

void setup() {
  // put your setup code here, to run once:
  FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS);
}

void loop() {
  // put your main code here, to run repeatedly:

#if FULLSPECTRUM
  
  for(int i=135; i<255; i++)
  {
    for(int j=0; j<30; j++)
    {
      im_hue = i + (j * 3);
      if(im_hue > 255) 
      {
        im_hue = 255 - (im_hue - 255);
      }
      leds[j] = CHSV(im_hue, 255, BRIGHTNESS);      
    }
    FastLED.show();
    //DELAY = analogRead(0);
    delay(DELAY);
  }

  for(int i=255; i>135; i--)
  {
    for(int j=0; j<30; j++)
    {
      im_hue = i + (j * 3);
      if(im_hue > 255) 
      {
        im_hue = 255 - (im_hue - 255);
      }
      leds[j] = CHSV(im_hue, 255, BRIGHTNESS);         
    }
    FastLED.show();
    //DELAY = analogRead(0);
    delay(DELAY);
  }

#else

  for(int i=0; i<255; i++)
  {
    for(int j=0; j<30; j++)
    {
      im_hue = i + (j * 3);
      if(im_hue > 255) 
      {
        im_hue = 255 - (im_hue - 255);
      }
      leds[j] = CHSV(im_hue, 255, BRIGHTNESS);      
    }
    FastLED.show();
    //DELAY = analogRead(0);
    delay(DELAY);
  }

  for(int i=255; i>0; i--)
  {
    for(int j=0; j<30; j++)
    {
      im_hue = i + (j * 3);
      if(im_hue > 255) 
      {
        im_hue = 255 - (im_hue - 255);
      }
      leds[j] = CHSV(im_hue, 255, BRIGHTNESS);         
    }
    FastLED.show();
    //DELAY = analogRead(0);
    delay(DELAY);
  }
  
#endif

}
