#line 1 "C:/Users/engfa/OneDrive/Desktop/Embedded CIE 349/Embedded_Project/HAL/LED.c"
#line 1 "c:/users/engfa/onedrive/desktop/embedded cie 349/embedded_project/hal/led_interface.h"
#line 1 "c:/users/engfa/onedrive/desktop/embedded cie 349/embedded_project/services/std_types.h"




typedef signed char s8;
typedef signed short int s16;
typedef signed long int s32;


typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long int u32;


typedef float f32;
typedef double f64;
typedef long double f128;
#line 10 "c:/users/engfa/onedrive/desktop/embedded cie 349/embedded_project/hal/led_interface.h"
void LED_Init(u8 Port, u8 Pin);
void LED_On(u8 Port, u8 Pin);
void LED_Off(u8 Port, u8 Pin);
void LED_Toggle(u8 Port, u8 Pin);
#line 1 "c:/users/engfa/onedrive/desktop/embedded cie 349/embedded_project/mcal/gpio/gpio_interface.h"
#line 1 "c:/users/engfa/onedrive/desktop/embedded cie 349/embedded_project/mcal/gpio/../../services/std_types.h"
#line 32 "c:/users/engfa/onedrive/desktop/embedded cie 349/embedded_project/mcal/gpio/gpio_interface.h"
void GPIO_SetPinDirection(unsigned char Port, unsigned char Pin, unsigned char Direction);
void GPIO_SetPinValue(unsigned char Port, unsigned char Pin, unsigned char Value);
unsigned char GPIO_GetPinValue(unsigned char Port, unsigned char Pin);
void GPIO_Init(void);
#line 4 "C:/Users/engfa/OneDrive/Desktop/Embedded CIE 349/Embedded_Project/HAL/LED.c"
void LED_Init(unsigned char Port, unsigned char Pin)
{
 GPIO_SetPinDirection(Port, Pin,  0 );
}

void LED_On(unsigned char Port, unsigned char Pin)
{
 GPIO_SetPinValue(Port, Pin,  1 );
}

void LED_Off(unsigned char Port, unsigned char Pin)
{
 GPIO_SetPinValue(Port, Pin,  0 );
}

void LED_Toggle(unsigned char Port, unsigned char Pin)
{
 unsigned char current = GPIO_GetPinValue(Port, Pin);

 if(current ==  1 )
 GPIO_SetPinValue(Port, Pin,  0 );
 else
 GPIO_SetPinValue(Port, Pin,  1 );
}
