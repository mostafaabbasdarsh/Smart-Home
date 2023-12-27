#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"
#include "DIO_register.h"
#include "DIO_private.h"
#include "DIO_cfg.h"













u8 DIO_u8SetPinValue (u8 Copy_u8Port, u8 Copy_u8Pin, u8 Copy_u8Value){
	
	
	
	
	if ((Copy_u8Port<DIO_PORTA) || (Copy_u8Port>DIO_PORTD) ||(Copy_u8Pin<PIN0) || (Copy_u8Pin>PIN7) || (Copy_u8Value<LOW) ||(Copy_u8Value>HIGH) ) {
		return 1;
	}
	else {
	
	
	if (Copy_u8Port ==DIO_PORTA) {
		
	
				if (Copy_u8Value==HIGH) {
					SET_BIT(PORTA,Copy_u8Pin);
				}
				else if (Copy_u8Value==LOW) {
					CLR_BIT(PORTA,Copy_u8Pin);
				}
			
		}
	
	
	
	
	else if (Copy_u8Port ==DIO_PORTB) {
		
				if (Copy_u8Value==HIGH) {
					SET_BIT(PORTB,Copy_u8Pin);
				}
				else if (Copy_u8Value==LOW) {
					CLR_BIT(PORTB,Copy_u8Pin);
				}
			
		}
	
	
	
	
	
	
	else if (Copy_u8Port ==DIO_PORTC) {
				
				if (Copy_u8Value==HIGH) {
					SET_BIT(PORTC,Copy_u8Pin);
				}
				else if (Copy_u8Value==LOW) {
					CLR_BIT(PORTC,Copy_u8Pin);
				}
		
		
		}
		
		else if (Copy_u8Port ==DIO_PORTD) {
				
				if (Copy_u8Value==HIGH) {
					SET_BIT(PORTD,Copy_u8Pin);
				}
				else if (Copy_u8Value==LOW) {
					CLR_BIT(PORTD,Copy_u8Pin);
				}
				
			
		}
	
	
	}
	
	
}






u8 DIO_u8SetPortValue (u8 Copy_u8Port, u8 Copy_u8Value) {
	
	
	if ((Copy_u8Port<DIO_PORTA) || (Copy_u8Port>DIO_PORTD) || (Copy_u8Value<0) ||(Copy_u8Value>255) ) {
		return 1;
	}
	else {
		
		
		
		if (Copy_u8Port ==DIO_PORTA) {
					PORTA=Copy_u8Value;
				
		}
		
		
		else if (Copy_u8Port ==DIO_PORTB) {
			
					PORTB=Copy_u8Value;
		}
		
		
		else if (Copy_u8Port ==DIO_PORTC) {
			
					PORTC=Copy_u8Value;
		}
		
		
		
		else if (Copy_u8Port ==DIO_PORTD) {
			
					PORTD=Copy_u8Value;
		}
	
	}
	
	
}




u8 DIO_u8GetPinValue(u8 Copy_u8Port,u8 Copy_u8Pin, u8 * returned_value) {
	
	
	
	
	if ((Copy_u8Port<DIO_PORTA) || (Copy_u8Port>DIO_PORTD) || (Copy_u8Pin<PIN0) ||(Copy_u8Pin>PIN7) ) {
		return 1;
	}
	else {
		
		
		if (Copy_u8Port ==DIO_PORTA) {
				
			*returned_value = GET_BIT(PINA,Copy_u8Pin);
			
		
		}
		
		
		
		else if (Copy_u8Port ==DIO_PORTB) {
				
				
				
				
			*returned_value = GET_BIT(PINB,Copy_u8Pin);
				
				
			
				
		
		}
		
		
		
		
		
		
		else if (Copy_u8Port ==DIO_PORTC) {
				
				
				
				
			*returned_value = GET_BIT(PINC,Copy_u8Pin);
				
				
			
				
		
		}
		
		
		else if (Copy_u8Port ==DIO_PORTD) {
				
				
				
				
			*returned_value = GET_BIT(PIND,Copy_u8Pin);
				
				
			
				
		
		}
		
			
	}
	
	
	
}













