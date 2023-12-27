#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "UART_interface.h"
#include "UART_register.h"
#include "UART_private.h"
#include "UART_cfg.h"



void USART_voidInit (void) {
/*
//select 8 bits for data
CLR_BIT(UCSRB,UCSRB_UCSZ2);
SET_BIT(UCSRC,UCSRC_UCSZ1);
SET_BIT(UCSRC,UCSRC_UCSZ0);
*/

u8 UCSRC_VALUE = 0;
SET_BIT(UCSRC_VALUE,7);
SET_BIT(UCSRC_VALUE,UCSRC_UCSZ1);
SET_BIT(UCSRC_VALUE,UCSRC_UCSZ0);
UCSRC = UCSRC_VALUE;



/*Select UCSRC Register as it shares the same location with UBRRH register*/
//UCSRC = 0b10000000;
/*select Asynchrounos*/
CLR_BIT(UCSRC,UCSRC_UMSEL);

/*No pariety*/
CLR_BIT(UCSRC,UCSRC_UPM0);
CLR_BIT(UCSRC,UCSRC_UPM1);

/*select 1 bit for stop*/
CLR_BIT(UCSRC,UCSRC_USBS);




/*select 8 bits for data*/
CLR_BIT(UCSRB,UCSRB_UCSZ2);
//SET_BIT(UCSRC,UCSRC_UCSZ1);
//SET_BIT(UCSRC,UCSRC_UCSZ0);




/*Select UBRRH Register as it shares the same location with UCSRC register*/
//UBRRH = 0b00000000;

/*select baud rate as : 9600 fbs*/
CLR_BIT(UCSRA,UCSRA_U2X);

//UBRRL = (8000000/(16*9600))-1;
UBRRL = 51;


// Receiver enable
SET_BIT(UCSRB,UCSRB_RXEN);
// Transmitter enable
SET_BIT(UCSRB,UCSRB_TXEN);

}



void USART_voidSend (u8 data){

	while(GET_BIT(UCSRA,UCSRA_UDRE)==0);
	


	UDR = data;


}

	

u8 USART_voidReceive (void){


	while(GET_BIT(UCSRA,UCSRA_RXC)==0);



	return UDR;

}









