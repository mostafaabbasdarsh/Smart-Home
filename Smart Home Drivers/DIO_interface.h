#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_



   #define DIO_PORTA 0
   #define DIO_PORTB 1
   #define DIO_PORTC 2
   #define DIO_PORTD 3
   
   
   #define OUTPUT 1
   #define INPUT 0
	
	
	
	
	#define PIN0 0
	#define PIN1 1
	#define PIN2 2
	#define PIN3 3
	#define PIN4 4
	#define PIN5 5
	#define PIN6 6
	#define PIN7 7
	
	
	#define HIGH 1
	#define LOW 0
	
	
	
	 #define PORT_OUTPUT 255
	 #define PORT_INPUT 0
	 #define PORT_HIGH 1
	 #define PORT_LOW 0
	
	

u8 DIO_u8SetPinDirection (u8 Copy_u8Port, u8 Copy_u8Pin, u8 Copy_u8Direction);

u8 DIO_u8SetPortDirection (u8 Copy_u8Port, u8 Copy_u8Direction);



u8 DIO_u8SetPinValue (u8 Copy_u8Port, u8 Copy_u8Pin, u8 Copy_u8Value);

u8 DIO_u8SetPortValue (u8 Copy_u8Port, u8 Copy_u8Value);



u8 DIO_u8GetPinValue(u8 Copy_u8Port,u8 Copy_u8Pin, u8 * returned_value);








#endif
