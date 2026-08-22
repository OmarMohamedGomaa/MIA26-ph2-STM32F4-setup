#define GPIO_H
#ifndef GPIO_H
#define clear(REG, BIT) ((REG) &= ~(1U << (BIT)))

#define set(REG, BIT) ((REG) |= (1U << (BIT)))


#define TIM3_BASE 0x40000400

#define TIM3_CCR3 *((volatile uint32_t *)(TIM3_BASE + 0x3C))

#define TIM3_PSC *((volatile uint32_t *)(TIM3_BASE + 0x28))

#define TIM3_ARR *((volatile uint32_t *)(TIM3_BASE + 0x2C))

#define TIM3_CCMR2 *((volatile uint32_t *)(TIM3_BASE + 0x1C))

#define TIM3_CCER *((volatile uint32_t *)(TIM3_BASE + 0x20))

#define TIM3_CR1 *((volatile uint32_t *)(TIM3_BASE + 0x00))


#define RCC_BASE 0x40023800

#define RCC_APB1ENR *((volatile uint32_t *)(RCC_BASE + 0x40))

#define TIM3_CCR4 *((volatile uint32_t *)(TIM3_BASE + 0x40))
#define MODER_OFFSET 0x00000000

#define GPIOx_MODER *((volatile uint32_t *)(0x40020000 + MODER_OFFSET))


#define ODR_OFFSET 0x00000014

#define GPIO_ODR *((volatile uint32_t *)(0x40020000 + ODR_OFFSET))


#define AFRL_OFFSET 0x00000020

#define GPIO_AFRL *((volatile uint32_t *)(0x40020000 + AFRL_OFFSET))

#endif  