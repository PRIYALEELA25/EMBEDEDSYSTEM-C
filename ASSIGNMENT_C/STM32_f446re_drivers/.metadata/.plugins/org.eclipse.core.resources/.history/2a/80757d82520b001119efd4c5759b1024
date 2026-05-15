/*
 * gpio toggle.c
 *
 *  Created on: 16-Feb-2026
 *      Author: hp
 */

#include "stm32f446xx.h"
#include "stm32_GPIO.h"
void delay(void){
	for(uint32_t i=0;i<50000;i++);
}

int main(void){
GPIO_Handle_t Gpioled;
GPIO_Handle_t GpioButton;
Gpioled.pGPIOx=GPIOA;
Gpioled.GPIO_PinConfig.GPIO_PinNumber=GPIO_PIN_NO_5;
Gpioled.GPIO_PinConfig.GPIO_PinMode= GPIO_MODE_OUT;
Gpioled.GPIO_PinConfig.GPIO_PinSpeed=GPIO_SPEED_FAST;
Gpioled.GPIO_PinConfig.GPIO_PinOPType=GPIO_OTYPE_PUSHPULL ;
Gpioled.GPIO_PinConfig.GPIO_PinPUPDControl=GPIO_PUPDR_NO_PULL_UP;


GPIO_PeriClockControl(GPIOA, ENABLE);
GPIO_Init(&Gpioled);

GpioButton.pGPIOx=GPIOC;
GpioButton.GPIO_PinConfig.GPIO_PinNumber=GPIO_PIN_NO_13;//PIN13 ->PC13->B1 BUTTON
GpioButton.GPIO_PinConfig.GPIO_PinMode=GPIO_MODE_IN;
GpioButton.GPIO_PinConfig.GPIO_PinSpeed=GPIO_SPEED_FAST;
GpioButton.GPIO_PinConfig.GPIO_PinPUPDControl=GPIO_PUPDR_NO_PULL_UP;
GPIO_PeriClockControl(GPIOC, ENABLE);//ENABLE CLOCK FOR PORT C
GPIO_Init(&GpioButton);//INITIALIZES BUTTON PIN
while(1){
	if(GPIO_READFROMINPUTPIN(GPIOC,GPIO_PIN_NO_13)==0)//BUTTON IS ACTIVE LOW
	{

	 GPIO_TOGGLEOUTPUTPIN(GPIOA,GPIO_PIN_NO_5);
	 delay();
while(GPIO_READFROMINPUTPIN(GPIOC,GPIO_PIN_NO_13)==0);//FOR TOGGLR LED ONCE.WAIT UNTIL RELEASES BUTTON
}
}
}
