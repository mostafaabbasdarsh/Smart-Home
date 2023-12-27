#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "PORT_interface.h"
#include "PORT_register.h"
#include "PORT_private.h"
#include "PORT_cfg.h"



 void PORT_Init (void) {
	 DDRA = PORTA_DIR;
	 
	 DDRB = PORTB_DIR;
	 
	 DDRC = PORTC_DIR;
	 
	 DDRD = PORTD_DIR;
	 
	 
	 PORTA = PORTA_VALUE;
	 
	 PORTB = PORTB_VALUE;
	  
     PORTC = PORTC_VALUE;
	   
     PORTD = PORTD_VALUE;
	 
	 
 }


