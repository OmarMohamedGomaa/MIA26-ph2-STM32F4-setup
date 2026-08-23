#ifndef GPIO_H
#define GPIO_H

#include <stdint.h>

    // Define macros for setting and clearing bits in registers
    #define clear(REG, BIT) ((REG) &= ~(1U << (BIT)))
    #define set(REG, BIT) ((REG) |= (1U << (BIT)))
    
    // Define macros for GPIO modes
    #define INPUT 0
    #define OUTPUT 1
    #define ALTERNATE_FUNCTOIN 2
    #define ANALOG 3
    
    // Define the base address for GPIOA and the offsets for MODER and ODR registers
    #define MODER_OFFSET 0x00000000
    #define GPIOA_MODER *((volatile uint32_t *)(0x40020000 + MODER_OFFSET))
    #define GPIOB_MODER *((volatile uint32_t *)(0x40020400 + MODER_OFFSET)) // probably not needed but just in case
    

    #define ODR_OFFSET 0x00000014
    #define GPIOA_ODR *((volatile uint32_t *)(0x40020000 + ODR_OFFSET))
    #define GPIOB_ODR *((volatile uint32_t *)(0x40020400 + ODR_OFFSET)) // probably not needed but just in case
    
    
    // Declare the GPIO functions
    void GPIO_Init(unsigned int GPIO_Pin, unsigned int GPIO_Mode);
    void GPIO_WritePin(unsigned int GPIO_Pin, int PinState);
    int GPIO_ReadPin(unsigned int GPIO_Pin);

#endif  
