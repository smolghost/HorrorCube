#include <Adafruit_NeoPixel.h>

#define PIXEL_COUNT 13
#define PIXEL_PIN 6

Adafruit_NeoPixel strip(PIXEL_COUNT, PIXEL_PIN, NEO_GRB + NEO_KHZ800);

int PulseSensorPurplePin = 0;
int LED6 = 6;

int Signal;
int Threshold = 600;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(PIXEL_PIN, OUTPUT);
  strip.begin();
  strip.show();
}

void loop() {
  // put your main code here, to run repeatedly:
  Signal = analogRead(PulseSensorPurplePin);
   Serial.println(Signal);
   if(Signal > Threshold){
    for(int i=0;i<PIXEL_COUNT;i++){                           
     strip.setPixelColor(i, strip.Color(150,150,0)); 
     strip.show();       
      } 
   }
    else {
     for(int i=0;i<PIXEL_COUNT;i++){
      strip.setPixelColor(i, strip.Color(150,0,150));
      strip.show();
     }
    }
  delay(10);
}
