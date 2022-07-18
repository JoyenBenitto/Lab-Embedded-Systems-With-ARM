#include "mbed.h"

DigitalIn MyInput(USER_BUTTON);
DigitalOut myLed(LED3);

int main()
{
    while(1){
        if(!MyInput){
            myLed =1;
        }
        else
        {
            myLed=0;
        }
    }
    return 0;
}