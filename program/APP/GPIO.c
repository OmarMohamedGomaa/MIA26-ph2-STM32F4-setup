#include "GPIO.h"

// In the header file define a macro for 
void GPIO_Init(unsigned int GPIO_Pin, unsigned int GPIO_Mode)
{
    if(GPIO_Mode == OUTPUT)
    {
        clear(GPIOA_MODER,GPIO_Pin*2 + 1 );
        set(GPIOA_MODER,GPIO_Pin*2);
    }
    else if (GPIO_Mode == INPUT)
    {
        clear(GPIOA_MODER,GPIO_Pin*2 + 1 );
        clear(GPIOA_MODER,GPIO_Pin*2);

        clear(PUPDR_A,GPIO_Pin*2 + 1 );
        clear(PUPDR_A,GPIO_Pin*2);

    }
}


void GPIO_WritePin(unsigned int GPIO_Pin, int PinState)
{
    if (PinState == 1) 
    {
        set(GPIOA_ODR, GPIO_Pin); // Set the pin high
    } 
    else
    {   
        clear(GPIOA_ODR, GPIO_Pin); // Set the pin low
    }
}

int GPIO_ReadPin(unsigned int GPIO_Pin)
{
    return ((GPIOA_IDR & (1U << GPIO_Pin)) != 0);
    //  0001 0000
    
}