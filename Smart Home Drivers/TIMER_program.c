#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "TIMER_interface.h"
#include "TIMER_register.h"
#include "TIMER_private.h"
#include "TIMER_cfg.h"

static void (*PTR_TO_FUNCTION)(void) = NULL;


void TIMER0_VoidInit(void){


	SET_BIT(TCCR0,TCCR0_WGM00);
	SET_BIT(TCCR0,TCCR0_WGM01);




	CLR_BIT(TCCR0,4);
	SET_BIT(TCCR0,5);






CLR_BIT(TCCR0,TCCR0_CS02);
SET_BIT(TCCR0,TCCR0_CS01);
SET_BIT(TCCR0,TCCR0_CS00);




}



void Timer0_SetComapareMatchValue (u8 value) {

	OCR0 = value;

}




void TIMER1_voidInit (void){


SET_BIT(TCCR1A,TCCR1A_COM1A1);
CLR_BIT(TCCR1A,TCCR1A_COM1A0);



CLR_BIT(TCCR1A,TCCR1A_WGM10);
SET_BIT(TCCR1A,TCCR1A_WGM11);
SET_BIT(TCCR1B,TCCR1B_WGM12);
SET_BIT(TCCR1B,TCCR1B_WGM13);










CLR_BIT(TCCR1B,TCCR1B_CS10);
SET_BIT(TCCR1B,TCCR1B_CS11);
CLR_BIT(TCCR1B,TCCR1B_CS12);



}





void TIMER1_voidSetICR (u16 TopValue){
	ICR1L = TopValue;
}





void TIMER1_voidSetChannel_A_CompareMatch (u16 compare_match ){
	OCR1AL = compare_match;
}











u8 TIMER0_SetCallBack(void(*PtrToFunction)(void)){

	u8 LOCAL_STATE_ERROR = OK;

	if (PtrToFunction == NULL) {
		LOCAL_STATE_ERROR = NULL_POINTER;
	}

	else {

		PTR_TO_FUNCTION = PtrToFunction;


	}

	return LOCAL_STATE_ERROR;
}


	


void __vector_10 (void) __attribute__((signal));

void __vector_10 (void) {

if (PTR_TO_FUNCTION!=NULL) {
	PTR_TO_FUNCTION();
}
else {

}


}











