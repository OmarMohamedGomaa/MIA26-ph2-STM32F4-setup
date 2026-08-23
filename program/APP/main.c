#include "../MCAL/RCC/RCC.h"
#include <stdio.h>
#include "GPIO.h"

#define GPIO_PIN_OUTPUT_1 1
#define GPIO_PIN_OUTPUT_2 2
#define GPIO_PIN_OUTPUT_3 3
#define GPIO_PIN_INPUT_4 4
#define GPIO_PIN_INPUT_5 5
#define GPIO_PIN_INPUT_6 6



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

void loop() {    
    GPIO_WritePin(GPIO_PIN_OUTPUT_4, GPIO_ReadPin(GPIO_PIN_INPUT_1)); 
    GPIO_WritePin(GPIO_PIN_OUTPUT_5, GPIO_ReadPin(GPIO_PIN_INPUT_2)); 
    GPIO_WritePin(GPIO_PIN_OUTPUT_6, GPIO_ReadPin(GPIO_PIN_INPUT_3)); 
}

int main(void) {
    ADC_Init();
    while(1) {
        uint16_t value = ADC_Read();
    }

    setup();  

    while (1) {
        loop();   
    }
}

