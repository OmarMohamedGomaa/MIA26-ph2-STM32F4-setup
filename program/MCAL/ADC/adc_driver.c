#include "stm32f4xx.h"

void ADC_Init(void) {
    RCC->APB2ENR |= RCC_APB2ENR_ADC1EN;   //enable ADC1 clock
    ADC->CCR |= (1 << 16);                //prescaler/4
    ADC1->CR2 |= ADC_CR2_ADON;            //power on
    ADC1->CR2 |= ADC_CR2_CONT;            //cont. mode
    ADC1->CR2 |= ADC_CR2_SWSTART;         //start convo
}

uint16_t ADC_Read(void) {
    while(!(ADC1->SR & ADC_SR_EOC));      //wait for convo
    return (uint16_t)ADC1->DR;            //return result
}
