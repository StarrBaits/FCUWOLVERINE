#include <Arduino.h>
#include "SelectorOnFull.h"


SelectorOnFull::SelectorOnFull()
{
}

void SelectorOnFull::selectorFull(int pin, int dwel, int rof)
{
        digitalWrite(pin, 1);
        delay(dwel / 2.5);
        digitalWrite(pin, 0);    
        delay(1000 / rof); 
}
