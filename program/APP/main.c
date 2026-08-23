#include "../MCAL/RCC/RCC.h"
#include <stdio.h>
#include "GPIO.h"

#define GPIO_PIN_OUTPUT_1 1
#define GPIO_PIN_OUTPUT_2 2
#define GPIO_PIN_OUTPUT_3 3
#define GPIO_PIN_INPUT_4 4
#define GPIO_PIN_INPUT_5 5
#define GPIO_PIN_INPUT_6 6

int pin4 ;
int pin5 ;
int pin6 ;

void setup()
{
    RCC_Init();
    RCC_EnableClock(RCC_AHB1ENR,RCC_AHB1ENR_GPIOAEN);
    GPIO_Init(GPIO_PIN_OUTPUT_1, OUTPUT);
    GPIO_Init(GPIO_PIN_OUTPUT_2, OUTPUT);
    GPIO_Init(GPIO_PIN_OUTPUT_3, OUTPUT);
    GPIO_Init(GPIO_PIN_INPUT_4, INPUT);
    GPIO_Init(GPIO_PIN_INPUT_5, INPUT);
    GPIO_Init(GPIO_PIN_INPUT_6, INPUT);
}

void loop()
{    
    pin4 = GPIO_ReadPin(GPIO_PIN_INPUT_4);
    pin5 = GPIO_ReadPin(GPIO_PIN_INPUT_5);
    pin6 = GPIO_ReadPin(GPIO_PIN_INPUT_6);



    GPIO_WritePin(GPIO_PIN_OUTPUT_1,pin4);  
    GPIO_WritePin(GPIO_PIN_OUTPUT_2,pin5);  
    GPIO_WritePin(GPIO_PIN_OUTPUT_3,pin6); 

}


int main(void)
{
    setup();  //as you know the setups is called only once
   
     
    while (1)
    {
        loop();   //loop is called continously so it's in the while(1)
    }
}