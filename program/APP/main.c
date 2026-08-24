#include "../MCAL/RCC/RCC.h"
#include "../MCAL/ADC/adc_driver.c"
#include "GPIO.h"

#define GPIO_PIN_OUTPUT_1 1
#define GPIO_PIN_OUTPUT_2 2
#define GPIO_PIN_OUTPUT_3 3
#define GPIO_PIN_INPUT_4 4
#define GPIO_PIN_INPUT_5 5
#define GPIO_PIN_INPUT_6 6



void setup()
{
    //Pins init
    RCC_Init();
    ADC_Init();
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
    GPIO_WritePin(GPIO_PIN_OUTPUT_1, GPIO_ReadPin(GPIO_PIN_INPUT_4)); 
    GPIO_WritePin(GPIO_PIN_OUTPUT_2, GPIO_ReadPin(GPIO_PIN_INPUT_5)); 
    GPIO_WritePin(GPIO_PIN_OUTPUT_3, GPIO_ReadPin(GPIO_PIN_INPUT_6));
    uint16_t value = ADC_Read();
}

int main(void) 
{
    setup();  
    while (1) 
    {
        loop();   
    }
}

