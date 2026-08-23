#include "../MCAL/RCC/RCC.h"
#include "GPIO.h"
#include "../MCAL/ADC/adc_driver.c"

#define GPIO_PIN_INPUT_1 1
#define GPIO_PIN_INPUT_2 2
#define GPIO_PIN_INPUT_3 3
#define GPIO_PIN_OUTPUT_4 4
#define GPIO_PIN_OUTPUT_5 5
#define GPIO_PIN_OUTPUT_6 6

void setup() {
    RCC_Init();
    GPIO_Init(GPIO_PIN_INPUT_1, INPUT);
    GPIO_Init(GPIO_PIN_INPUT_2, INPUT);
    GPIO_Init(GPIO_PIN_INPUT_3, INPUT);
    GPIO_Init(GPIO_PIN_OUTPUT_4, OUTPUT);
    GPIO_Init(GPIO_PIN_OUTPUT_5, OUTPUT);
    GPIO_Init(GPIO_PIN_OUTPUT_6, OUTPUT);
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

