#ifndef TIMER_INTERFACE_H_
#define TIMER_INTERFACE_H_


void TIMER0_VoidInit(void);


u8 TIMER0_SetCallBack(void(*PtrToFunction)(void));


void Timer0_SetComapareMatchValue (u8 value);
  
void TIMER1_voidInit (void);

void TIMER1_voidSetICR (u16 TopValue);

void TIMER1_voidSetChannel_A_CompareMatch (u16 compare_match );

#endif
