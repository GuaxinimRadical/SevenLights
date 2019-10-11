
#ifndef SevenLights_h
#define SevenLights_h
#include <Arduino.h>

class SevenLights
{
  public:
    SevenLights(int a7,int b7,int c7,int d7,int e7,int f7,int g7);
    void cout(int x);
  private:
    int a, b, c, d, e, f, g;
};


#endif SevenLights_h
