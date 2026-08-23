#include "GPIO.h"

// In the header file define a macro for 
void GPIO_Init(unsigned int GPIO_Pin, unsigned int GPIO_Mode)
{
    // Configure the GPIO pin based on the provided configuration
    // This is a placeholder for the actual implementation
}


void GPIO_WritePin(unsigned int GPIO_Pin, int PinState)
{
    if (PinState) 
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
    return (GPIOA_ODR & (1U << GPIO_Pin)) ? 1 : 0; // Return the state of the pin
}