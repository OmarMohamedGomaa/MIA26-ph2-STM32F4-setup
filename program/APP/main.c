#include "../MCAL/RCC/RCC.h"
#define GPIO_PIN_0 0
#define GPIO_PIN_1 1
#define GPIO_PIN_2 2

void setup(){
    RCC_Init();
    

}
//this function is called continously
void loop(){
    
}

int main(void)
{
    setup();  //as you know the setups is called only once


    while (1)
    {
        loop();   //loop is called continously so it's in the while(1)
    }
}