#include <stdio.h>
#include <string.h>
#include "STD_TYPES.h"
#include <util/delay.h>
#include "PORT_interface.h"
#include "DIO_interface.h"
#include "UART_interface.h"
#include "TIMER_interface.h"

void main (void) {
	u8 Data,Select;
	PORT_Init();


	TIMER1_voidInit();

	TIMER1_voidSetICR(20000);



	USART_voidInit();




	u32 pass_correct = 0,pass,ID;
	u8 num=0;
	u8 arr[4];
	u8 num_2 = 0;
	u8 arr_2[5];
	u8 arr_3[4];
	u8 arr_4[5];
	u8 arr_5[5];
	u8 arr_6[5];
	u8 arr_7[5];
	u8 arr_8[5];
	u8 arr_9[5];
	u8 arr_10[5];
	u8 arr_11[5];
	u8 arr_12[4];
	u8 arr_13[4];
	u8 arr_14[4];
	u8 arr_15[4];
	u8 arr_16[4];
	u8 arr_17[4];
	u8 arr_18[4];
	u8 arr_19[4];
	u8 arr_20[4];
	u8 coi =0;
	

	char sen[] = "welcome\nenter user name\n";

	
	char sen_2[] = "enter password\n";

	char sen_3[] = "1- open door\n"; 

	char sen_4[] = "2- close door\n"; 

	char sen_5[] = "3- open light\n"; 

	char sen_6[] = "4- close light\n"; 

	char sen_7[] = "5- exit\n"; 

	char UserName_1_correct[] = "mostafa abass";

	char UserName_2_correct[] = "mostafa ahmed";

	char UserName_3_correct[] = "ibrahim zakria";

	char UserName_4_correct[] = "ibrahim yasser";

	char UserName_5_correct[] = "mahmoud mostafa";

	char UserName_6_correct[] = "mahmoud mohamed";

	char UserName_7_correct[] = "mahmoud abdelrahman";

	char UserName_8_correct[] = "mahfooz abdelrahman";

	char UserName_9_correct[] = "metwally abdelrahman";

	char UserName_10_correct[] = "metwally abdelraheem";


	u32 password_1_correct = 1234;

	u32 password_2_correct = 5678;

	u32 password_3_correct = 8752;

	u32 password_4_correct = 9637;

	u32 password_5_correct = 5491;

	u32 password_6_correct = 8524;

	u32 password_7_correct = 8491;

	u32 password_8_correct = 2587;

	u32 password_9_correct = 2599;

	u32 password_10_correct = 7412;

	char UserName_1_recieve[13];

	char UserName_2_recieve[13];

	char UserName_3_recieve[14];

	char UserName_4_recieve[14];

	char UserName_5_recieve[15];

	char UserName_6_recieve[15];

	char UserName_7_recieve[19];

	char UserName_8_recieve[19];

	char UserName_9_recieve[20];

	char UserName_10_recieve[20];




	u32 password_1_recieve;

	u32 password_2_recieve;

	u32 password_3_recieve;

	u32 password_4_recieve;

	u32 password_5_recieve;

	u32 password_6_recieve;

	u32 password_7_recieve;

	u32 password_8_recieve;

	u32 password_9_recieve;

	u32 password_10_recieve;


	u8 indicate_1 =0;
	u8 indicate_2 =0;
	u8 indicate_3 =0;
	u8 indicate_4 =0;
	u8 indicate_5 =0;
	u8 indicate_6 =0;
	u8 indicate_7 =0;
	u8 indicate_8 =0;
	u8 indicate_9 =0;
	u8 indicate_10 =0;


	

	char exami[9];

	char str1 [] = "abcd";
	char str2 [] = "abcd";
	u8 bbb =0;
	while (1) {

		indicate_1 =0;
		indicate_2 =0;
		indicate_3 =0;
		indicate_4 =0;
		indicate_5 =0;
		indicate_6 =0;
		indicate_7 =0;
		indicate_8 =0;
		indicate_9 =0;
		indicate_10 =0;




		for (u8 i=0;i<24;i++) {
			USART_voidSend(sen[i]);
		}


		for (u8 i=0;i<13;i++) {
			Data = USART_voidReceive();
			UserName_1_recieve[i] = Data;

			UserName_2_recieve[i] = Data;

			UserName_3_recieve[i] = Data;


			UserName_4_recieve[i] = Data;

			UserName_5_recieve[i] = Data;

			UserName_6_recieve[i] = Data;

			UserName_7_recieve[i] = Data;

			UserName_8_recieve[i] = Data;

			UserName_9_recieve[i] = Data;

			UserName_10_recieve[i] = Data;



		}


		for (u8 i=0;i<13;i++) {

			if (UserName_1_correct[i] ==UserName_1_recieve[i] ){
				indicate_1++;
			}

			if (UserName_2_correct[i] ==UserName_2_recieve[i] ){
				indicate_2++;
			}




		}

		if ((indicate_2!=13) &&(indicate_1!=13)) {



			Data = USART_voidReceive();
			UserName_3_recieve[13] = Data;

			UserName_4_recieve[13] = Data;

			UserName_5_recieve[13] = Data;

			UserName_6_recieve[13] = Data;

			UserName_7_recieve[13] = Data;

			UserName_8_recieve[13] = Data;

			UserName_9_recieve[13] = Data;

			UserName_10_recieve[13] = Data;



		}

		for (u8 i=0;i<14;i++) {

			if (UserName_3_correct[i] ==UserName_3_recieve[i] ){
				indicate_3++;
			}

			if (UserName_4_correct[i] ==UserName_4_recieve[i] ){
				indicate_4++;
			}
		}





		if ((indicate_2!=13) &&(indicate_1!=13) && (indicate_3!=14) && (indicate_4!=14)) {



			Data = USART_voidReceive();

			UserName_5_recieve[14] = Data;

			UserName_6_recieve[14] = Data;

			UserName_7_recieve[14] = Data;

			UserName_8_recieve[14] = Data;

			UserName_9_recieve[14] = Data;

			UserName_10_recieve[14] = Data;



		}





		for (u8 i=0;i<15;i++) {

			if (UserName_5_correct[i] ==UserName_5_recieve[i] ){
				indicate_5++;
			}


			if (UserName_6_correct[i] ==UserName_6_recieve[i] ){
				indicate_6++;
			}


		}








		if ((indicate_2!=13) &&(indicate_1!=13) && (indicate_3!=14) && (indicate_4!=14)
				&& (indicate_5!=15) && (indicate_6!=15)) {



			for (u8 i = 15;i<19;i++) {
				Data = USART_voidReceive();
				UserName_7_recieve[i] = Data;

				UserName_8_recieve[i] = Data;

				UserName_9_recieve[i] = Data;

				UserName_10_recieve[i] = Data;

			}





		}


		for (u8 i=0;i<19;i++) {

			if (UserName_7_correct[i] ==UserName_7_recieve[i] ){
				indicate_7++;
			}



			if (UserName_8_correct[i] ==UserName_8_recieve[i] ){
				indicate_8++;
			}


		}




		if ((indicate_2!=13) &&(indicate_1!=13) && (indicate_3!=14) && (indicate_4!=14)
				&& (indicate_5!=15) && (indicate_6!=15)&&
				(indicate_7!=19) && (indicate_8!=19)) {

			Data = USART_voidReceive();
			UserName_9_recieve[19] = Data;

			UserName_10_recieve[19] = Data;

		}





		for (u8 i=0;i<20;i++) {

			if (UserName_9_correct[i] ==UserName_9_recieve[i] ){
				indicate_9++;
			}



			if (UserName_10_correct[i] ==UserName_10_recieve[i] ){
				indicate_10++;
			}


		}




		for (u8 i=0;i<15;i++) {
			USART_voidSend(sen_2[i]);
		}

		while (1) {



			if (indicate_2 == 13)
			{
				Data = USART_voidReceive();

				arr_3[num_2] =Data;

				num_2++;
				if (num_2==4) {
					num_2 =0;
					break;
				}
			}






			else if (indicate_1 == 13) {
				Data = USART_voidReceive();

				arr_2[num_2] =Data;
				num_2++;
				if (num_2==5) {
					num_2 =0;
					break;
				}

			}



			else if (indicate_3 == 14)
			{
				Data = USART_voidReceive();

				arr_4[num_2] =Data;

				num_2++;
				if (num_2==5) {
					num_2 =0;
					break;
				}
			}



			else if (indicate_4 == 14)
			{
				Data = USART_voidReceive();

				arr_5[num_2] =Data;
			
				num_2++;
				if (num_2==5) {
					num_2 =0;
					break;
				}
			}




			else if (indicate_5 == 15)
			{
				Data = USART_voidReceive();

				arr_6[num_2] =Data;
				
				num_2++;
				if (num_2==5) {
					num_2 =0;
					break;
				}
			}







			else if (indicate_6 == 15)
			{
				Data = USART_voidReceive();

				arr_7[num_2] =Data;
				
				num_2++;
				if (num_2==5) {
					num_2 =0;
					break;
				}
			}








			else if (indicate_7 == 19)
			{
				Data = USART_voidReceive();

				arr_8[num_2] =Data;
				
				num_2++;
				if (num_2==5) {
					num_2 =0;
					break;
				}
			}





			else if (indicate_8 == 19)
			{
				Data = USART_voidReceive();

				arr_9[num_2] =Data;
				

				num_2++;
				if (num_2==5) {
					num_2 =0;
					break;
				}
			}







			else if (indicate_9 == 20)
			{
				Data = USART_voidReceive();

				arr_10[num_2] =Data;
				

				num_2++;
				if (num_2==5) {
					num_2 =0;
					break;
				}
			}





			else if (indicate_10 == 20)
			{
				Data = USART_voidReceive();

				arr_11[num_2] =Data;
				

				num_2++;
				if (num_2==5) {
					num_2 =0;
					break;
				}
			}




		}




		if ((arr_2[1] == '1') && (arr_2[2] == '2') && (arr_2[3] == '3') &&
				(arr_2[4] == '4'))
		{
			arr_2[1] = 1;
			arr_2[2] = 2;
			arr_2[3] = 3;
			arr_2[4] = 4;
		}



		if ((arr_3[0] == '5') && (arr_3[1] == '6') && (arr_3[2] == '7') &&
				(arr_3[3] == '8'))
		{
			arr_3[0] = 5;
			arr_3[1] = 6;
			arr_3[2] = 7;
			arr_3[3] = 8;
		}








		if ((arr_4[1] == '8') && (arr_4[2] == '7') && (arr_4[3] == '5') &&
				(arr_4[4] == '2'))
		{
			arr_4[1] = 8;
			arr_4[2] = 7;
			arr_4[3] = 5;
			arr_4[4] = 2;
		}




		if ((arr_5[1] == '9') && (arr_5[2] == '6') && (arr_5[3] == '3') &&
				(arr_5[4] == '7'))
		{
			arr_5[1] = 9;
			arr_5[2] = 6;
			arr_5[3] = 3;
			arr_5[4] = 7;
		}



		if ((arr_6[1] == '5') && (arr_6[2] == '4') && (arr_6[3] == '9') &&
				(arr_6[4] == '1'))
		{
			arr_6[1] = 5;
			arr_6[2] = 4;
			arr_6[3] = 9;
			arr_6[4] = 1;
		}



		if ((arr_7[1] == '8') && (arr_7[2] == '5') && (arr_7[3] == '2') &&
				(arr_7[4] == '4'))
		{
			arr_7[1] = 8;
			arr_7[2] = 5;
			arr_7[3] = 2;
			arr_7[4] = 4;
		}







		if ((arr_8[1] == '8') && (arr_8[2] == '4') && (arr_8[3] == '9') &&
				(arr_8[4] == '1'))
		{
			arr_8[1] = 8;
			arr_8[2] = 4;
			arr_8[3] = 9;
			arr_8[4] = 1;
		}






		if ((arr_9[1] == '2') && (arr_9[2] == '5') && (arr_9[3] == '8') &&
				(arr_9[4] == '7'))
		{
			arr_9[1] = 2;
			arr_9[2] = 5;
			arr_9[3] = 8;
			arr_9[4] = 7;
		}




		if ((arr_10[1] == '2') && (arr_10[2] == '5') && (arr_10[3] == '9') &&
				(arr_10[4] == '9'))
		{
			arr_10[1] = 2;
			arr_10[2] = 5;
			arr_10[3] = 9;
			arr_10[4] = 9;
		}





		if ((arr_11[1] == '7') && (arr_11[2] == '4') && (arr_11[3] == '1') &&
				(arr_11[4] == '2'))
		{
			arr_11[1] = 7;
			arr_11[2] = 4;
			arr_11[3] = 1;
			arr_11[4] = 2;
		}



		password_1_recieve = arr_2[1] * 1000 + arr_2[2] * 100 + arr_2[3] * 10 + arr_2[4];

		password_2_recieve = arr_3[0] * 1000 + arr_3[1] * 100 + arr_3[2] * 10 + arr_3[3];

		password_3_recieve = arr_4[1] * 1000 + arr_4[2] * 100 + arr_4[3] * 10 + arr_4[4];

		password_4_recieve = arr_5[1] * 1000 + arr_5[2] * 100 + arr_5[3] * 10 + arr_5[4];

		password_5_recieve = arr_6[1] * 1000 + arr_6[2] * 100 + arr_6[3] * 10 + arr_6[4];

		password_6_recieve = arr_7[1] * 1000 + arr_7[2] * 100 + arr_7[3] * 10 + arr_7[4];

		password_7_recieve = arr_8[1] * 1000 + arr_8[2] * 100 + arr_8[3] * 10 + arr_8[4];

		password_8_recieve = arr_9[1] * 1000 + arr_9[2] * 100 + arr_9[3] * 10 + arr_9[4];

		password_9_recieve = arr_10[1] * 1000 + arr_10[2] * 100 + arr_10[3] * 10 + arr_10[4];


		password_10_recieve = arr_11[1] * 1000 + arr_11[2] * 100 + arr_11[3] * 10 + arr_11[4];









		for (u8 i=0;i<2;i++) {


		if ((password_1_recieve !=password_1_correct )  &&(indicate_1 == 13))
		{


			for (u8 i=0;i<15;i++) {
				USART_voidSend(sen_2[i]);
			}

			while(1){
			Data = USART_voidReceive();

			arr_12[num_2] =Data;
			

			num_2++;
			if (num_2==4) {
				num_2 =0;
				break;
			}

		}








			if ((arr_12[0] == '1') && (arr_12[1] == '2') && (arr_12[2] == '3') &&
					(arr_12[3] == '4'))
			{
				arr_12[0] = 1;
				arr_12[1] = 2;
				arr_12[2] = 3;
				arr_12[3] = 4;
			}




			password_1_recieve = arr_12[0] * 1000 + arr_12[1] * 100 + arr_12[2] * 10 + arr_12[3];



		}






		else if ((password_2_recieve !=password_2_correct )  &&(indicate_2 == 13))
		{


			for (u8 i=0;i<15;i++) {
				USART_voidSend(sen_2[i]);
			}

			while(1){
				Data = USART_voidReceive();

				arr_3[num_2] =Data;
				

				num_2++;
				if (num_2==4) {
					num_2 =0;
					break;
				}

			}


			if ((arr_3[0] == '5') && (arr_3[1] == '6') && (arr_3[2] == '7') &&
					(arr_3[3] == '8'))
			{
				arr_3[0] = 5;
				arr_3[1] = 6;
				arr_3[2] = 7;
				arr_3[3] = 8;
			}




			password_2_recieve = arr_3[0] * 1000 + arr_3[1] * 100 + arr_3[2] * 10 + arr_3[3];



		}








		else if ((password_3_recieve !=password_3_correct )  &&(indicate_3 == 14))
		{


			for (u8 i=0;i<15;i++) {
				USART_voidSend(sen_2[i]);
			}

			while(1){
				Data = USART_voidReceive();

				arr_13[num_2] =Data;
				

				num_2++;
				if (num_2==4) {
					num_2 =0;
					break;
				}

			}



			if ((arr_13[0] == '8') && (arr_13[1] == '7') && (arr_13[2] == '5') &&
					(arr_13[3] == '2'))
			{
				arr_13[0] = 8;
				arr_13[1] = 7;
				arr_13[2] = 5;
				arr_13[3] = 2;
			}




			password_3_recieve = arr_13[0] * 1000 + arr_13[1] * 100 + arr_13[2] * 10 + arr_13[3];



		}



		else if ((password_4_recieve !=password_4_correct )  &&(indicate_4 == 14))
		{


			for (u8 i=0;i<15;i++) {
				USART_voidSend(sen_2[i]);
			}

			while(1){
				Data = USART_voidReceive();

				arr_14[num_2] =Data;
				

				num_2++;
				if (num_2==4) {
					num_2 =0;
					break;
				}

			}



			if ((arr_14[0] == '9') && (arr_14[1] == '6') && (arr_14[2] == '3') &&
					(arr_14[3] == '7'))
			{
				arr_14[0] = 9;
				arr_14[1] = 6;
				arr_14[2] = 3;
				arr_14[3] = 7;
			}




			password_4_recieve = arr_14[0] * 1000 + arr_14[1] * 100 + arr_14[2] * 10 + arr_14[3];



		}




		else if ((password_5_recieve !=password_5_correct )  &&(indicate_5 == 15))
		{


			for (u8 i=0;i<15;i++) {
				USART_voidSend(sen_2[i]);
			}

			while(1){
				Data = USART_voidReceive();

				arr_15[num_2] =Data;
				

				num_2++;
				if (num_2==4) {
					num_2 =0;
					break;
				}

			}




			if ((arr_15[0] == '5') && (arr_15[1] == '4') && (arr_15[2] == '9') &&
					(arr_15[3] == '1'))
			{
				arr_15[0] = 5;
				arr_15[1] = 4;
				arr_15[2] = 9;
				arr_15[3] = 1;
			}




			password_5_recieve = arr_15[0] * 1000 + arr_15[1] * 100 + arr_15[2] * 10 + arr_15[3];



		}










		else if ((password_6_recieve !=password_6_correct )  &&(indicate_6 == 15))
		{


			for (u8 i=0;i<15;i++) {
				USART_voidSend(sen_2[i]);
			}

			while(1){
				Data = USART_voidReceive();

				arr_16[num_2] =Data;
				

				num_2++;
				if (num_2==4) {
					num_2 =0;
					break;
				}

			}





			




			if ((arr_16[0] == '8') && (arr_16[1] == '5') && (arr_16[2] == '2') &&
					(arr_16[3] == '4'))
			{
				arr_16[0] = 8;
				arr_16[1] = 5;
				arr_16[2] = 2;
				arr_16[3] = 4;
			}




			password_6_recieve = arr_16[0] * 1000 + arr_16[1] * 100 + arr_16[2] * 10 + arr_16[3];



		}












		else if ((password_7_recieve !=password_7_correct )  &&(indicate_7 == 19))
		{


			for (u8 i=0;i<15;i++) {
				USART_voidSend(sen_2[i]);
			}

			while(1){
				Data = USART_voidReceive();

				arr_17[num_2] =Data;
				

				num_2++;
				if (num_2==4) {
					num_2 =0;
					break;
				}

			}




			if ((arr_17[0] == '8') && (arr_17[1] == '4') && (arr_17[2] == '9') &&
					(arr_17[3] == '1'))
			{
				arr_17[0] = 8;
				arr_17[1] = 4;
				arr_17[2] = 9;
				arr_17[3] = 1;
			}




			password_7_recieve = arr_17[0] * 1000 + arr_17[1] * 100 + arr_17[2] * 10 + arr_17[3];



		}










		else if ((password_8_recieve !=password_8_correct )  &&(indicate_8 == 19))
		{


			for (u8 i=0;i<15;i++) {
				USART_voidSend(sen_2[i]);
			}

			while(1){
				Data = USART_voidReceive();

				arr_18[num_2] =Data;
				

				num_2++;
				if (num_2==4) {
					num_2 =0;
					break;
				}

			}






			if ((arr_18[0] == '2') && (arr_18[1] == '5') && (arr_18[2] == '8') &&
					(arr_18[3] == '7'))
			{
				arr_18[0] = 2;
				arr_18[1] = 5;
				arr_18[2] = 8;
				arr_18[3] = 7;
			}




			password_8_recieve = arr_18[0] * 1000 + arr_18[1] * 100 + arr_18[2] * 10 + arr_18[3];



		}












		else if ((password_9_recieve !=password_9_correct )  &&(indicate_9 == 20))
		{


			for (u8 i=0;i<15;i++) {
				USART_voidSend(sen_2[i]);
			}

			while(1){
				Data = USART_voidReceive();

				arr_19[num_2] =Data;
				

				num_2++;
				if (num_2==4) {
					num_2 =0;
					break;
				}

			}





			




			if ((arr_19[0] == '2') && (arr_19[1] == '5') && (arr_19[2] == '9') &&
					(arr_19[3] == '9'))
			{
				arr_19[0] = 2;
				arr_19[1] = 5;
				arr_19[2] = 9;
				arr_19[3] = 9;
			}




			password_9_recieve = arr_19[0] * 1000 + arr_19[1] * 100 + arr_19[2] * 10 + arr_19[3];



		}









		else if ((password_10_recieve !=password_10_correct )  &&(indicate_10 == 20))
		{


			for (u8 i=0;i<15;i++) {
				USART_voidSend(sen_2[i]);
			}

			while(1){
				Data = USART_voidReceive();

				arr_20[num_2] =Data;
				

				num_2++;
				if (num_2==4) {
					num_2 =0;
					break;
				}

			}





			




			if ((arr_20[0] == '7') && (arr_20[1] == '4') && (arr_20[2] == '1') &&
					(arr_20[3] == '2'))
			{
				arr_20[0] = 7;
				arr_20[1] = 4;
				arr_20[2] = 1;
				arr_20[3] = 2;
			}




			password_10_recieve = arr_20[0] * 1000 + arr_20[1] * 100 + arr_20[2] * 10 + arr_20[3];



		}





		}




		if ((password_1_recieve !=password_1_correct )
				&&(indicate_1 == 13)) {
			DIO_u8SetPinValue(DIO_PORTC,PIN6,HIGH);
			while(1){

			}
		}



		else if ((password_2_recieve !=password_2_correct )
				&&(indicate_2 == 13)) {
			DIO_u8SetPinValue(DIO_PORTC,PIN6,HIGH);
			while(1){

			}
		}


		else if ((password_3_recieve !=password_3_correct )
				&&(indicate_3 == 14)) {
			DIO_u8SetPinValue(DIO_PORTC,PIN6,HIGH);
			while(1){

			}
		}


		else if ((password_4_recieve !=password_4_correct )
				&&(indicate_4 == 14)) {
			DIO_u8SetPinValue(DIO_PORTC,PIN6,HIGH);
			while(1){

			}
		}

		else if ((password_5_recieve !=password_5_correct )
				&&(indicate_5 == 15)) {
			DIO_u8SetPinValue(DIO_PORTC,PIN6,HIGH);
			while(1){

			}
		}


		else if ((password_6_recieve !=password_6_correct )
				&&(indicate_6 == 15)) {
			DIO_u8SetPinValue(DIO_PORTC,PIN6,HIGH);
			while(1){

			}
		}



		else if ((password_7_recieve !=password_7_correct )
				&&(indicate_7 == 19)) {
			DIO_u8SetPinValue(DIO_PORTC,PIN6,HIGH);
			while(1){

			}
		}



		else if ((password_8_recieve !=password_8_correct )
				&&(indicate_8 == 19)) {
			DIO_u8SetPinValue(DIO_PORTC,PIN6,HIGH);
			while(1){

			}
		}


		else if ((password_9_recieve !=password_9_correct )
				&&(indicate_9 == 20)) {
			DIO_u8SetPinValue(DIO_PORTC,PIN6,HIGH);
			while(1){

			}
		}



		else if ((password_10_recieve !=password_10_correct )
				&&(indicate_10 == 20)) {
			DIO_u8SetPinValue(DIO_PORTC,PIN6,HIGH);
			while(1){

			}
		}




		if ((password_1_recieve ==password_1_correct )  &&(indicate_1 == 13))
		{

			while (1) {

			for (u8 i=0;i<13;i++) {
				USART_voidSend(sen_3[i]);
			}

			for (u8 i=0;i<14;i++) {
				USART_voidSend(sen_4[i]);
			}

			for (u8 i=0;i<14;i++) {
				USART_voidSend(sen_5[i]);
			}

			for (u8 i=0;i<15;i++) {
				USART_voidSend(sen_6[i]);
			}

			for (u8 i=0;i<8;i++) {
				USART_voidSend(sen_7[i]);
			}




			Data = USART_voidReceive();

			if (Data == '1') {

				TIMER1_voidSetChannel_A_CompareMatch(900 );
			}
			else if (Data == '2') {

				TIMER1_voidSetChannel_A_CompareMatch(750);
			}
			else if (Data == '3') {

				DIO_u8SetPinValue(DIO_PORTC,PIN7,HIGH);
			}
			else if (Data == '4') {
				DIO_u8SetPinValue(DIO_PORTC,PIN7,LOW);

			}

			else if (Data == '5') {
				break;

			}




			}




		}



		else if ((password_2_recieve ==password_2_correct )  &&(indicate_2 == 13))
		{
			while (1) {

				for (u8 i=0;i<13;i++) {
					USART_voidSend(sen_3[i]);
				}

				for (u8 i=0;i<14;i++) {
					USART_voidSend(sen_4[i]);
				}

				for (u8 i=0;i<14;i++) {
					USART_voidSend(sen_5[i]);
				}

				for (u8 i=0;i<15;i++) {
					USART_voidSend(sen_6[i]);
				}

				for (u8 i=0;i<8;i++) {
					USART_voidSend(sen_7[i]);
				}




				Data = USART_voidReceive();

				if (Data == '1') {

					TIMER1_voidSetChannel_A_CompareMatch(900 );
				}
				else if (Data == '2') {

					TIMER1_voidSetChannel_A_CompareMatch(750);
				}
				else if (Data == '3') {

					DIO_u8SetPinValue(DIO_PORTC,PIN7,HIGH);
				}
				else if (Data == '4') {
					DIO_u8SetPinValue(DIO_PORTC,PIN7,LOW);

				}

				else if (Data == '5') {
					break;

				}




			}




		}



		else if ((password_3_recieve ==password_3_correct )  &&(indicate_3 == 14))
		{
			while (1) {



				for (u8 i=0;i<13;i++) {
					USART_voidSend(sen_3[i]);
				}

				for (u8 i=0;i<14;i++) {
					USART_voidSend(sen_4[i]);
				}

				for (u8 i=0;i<14;i++) {
					USART_voidSend(sen_5[i]);
				}

				for (u8 i=0;i<15;i++) {
					USART_voidSend(sen_6[i]);
				}

				for (u8 i=0;i<8;i++) {
					USART_voidSend(sen_7[i]);
				}




				Data = USART_voidReceive();

				if (Data == '1') {

					TIMER1_voidSetChannel_A_CompareMatch(900 );
				}
				else if (Data == '2') {

					TIMER1_voidSetChannel_A_CompareMatch(750);
				}
				else if (Data == '3') {

					DIO_u8SetPinValue(DIO_PORTC,PIN7,HIGH);
				}
				else if (Data == '4') {
					DIO_u8SetPinValue(DIO_PORTC,PIN7,LOW);

				}

				else if (Data == '5') {
					break;

				}




			}




		}


		else if ((password_4_recieve ==password_4_correct )  &&(indicate_4 == 14))
		{
			while (1) {

				for (u8 i=0;i<13;i++) {
					USART_voidSend(sen_3[i]);
				}

				for (u8 i=0;i<14;i++) {
					USART_voidSend(sen_4[i]);
				}

				for (u8 i=0;i<14;i++) {
					USART_voidSend(sen_5[i]);
				}

				for (u8 i=0;i<15;i++) {
					USART_voidSend(sen_6[i]);
				}

				for (u8 i=0;i<8;i++) {
					USART_voidSend(sen_7[i]);
				}




				Data = USART_voidReceive();

				if (Data == '1') {

					TIMER1_voidSetChannel_A_CompareMatch(900 );
				}
				else if (Data == '2') {

					TIMER1_voidSetChannel_A_CompareMatch(750);
				}
				else if (Data == '3') {

					DIO_u8SetPinValue(DIO_PORTC,PIN7,HIGH);
				}
				else if (Data == '4') {
					DIO_u8SetPinValue(DIO_PORTC,PIN7,LOW);

				}

				else if (Data == '5') {
					break;

				}




			}




		}

		else if ((password_5_recieve ==password_5_correct )  &&(indicate_5 == 15))
		{
			while (1) {

				for (u8 i=0;i<13;i++) {
					USART_voidSend(sen_3[i]);
				}

				for (u8 i=0;i<14;i++) {
					USART_voidSend(sen_4[i]);
				}

				for (u8 i=0;i<14;i++) {
					USART_voidSend(sen_5[i]);
				}

				for (u8 i=0;i<15;i++) {
					USART_voidSend(sen_6[i]);
				}

				for (u8 i=0;i<8;i++) {
					USART_voidSend(sen_7[i]);
				}




				Data = USART_voidReceive();

				if (Data == '1') {

					TIMER1_voidSetChannel_A_CompareMatch(900 );
				}
				else if (Data == '2') {

					TIMER1_voidSetChannel_A_CompareMatch(750);
				}
				else if (Data == '3') {

					DIO_u8SetPinValue(DIO_PORTC,PIN7,HIGH);
				}
				else if (Data == '4') {
					DIO_u8SetPinValue(DIO_PORTC,PIN7,LOW);

				}

				else if (Data == '5') {
					break;

				}




			}




		}

		else if ((password_6_recieve ==password_6_correct )  &&(indicate_6 == 15))
		{
			while (1) {

				for (u8 i=0;i<13;i++) {
					USART_voidSend(sen_3[i]);
				}

				for (u8 i=0;i<14;i++) {
					USART_voidSend(sen_4[i]);
				}

				for (u8 i=0;i<14;i++) {
					USART_voidSend(sen_5[i]);
				}

				for (u8 i=0;i<15;i++) {
					USART_voidSend(sen_6[i]);
				}

				for (u8 i=0;i<8;i++) {
					USART_voidSend(sen_7[i]);
				}




				Data = USART_voidReceive();

				if (Data == '1') {

					TIMER1_voidSetChannel_A_CompareMatch(900 );
				}
				else if (Data == '2') {

					TIMER1_voidSetChannel_A_CompareMatch(750);
				}
				else if (Data == '3') {

					DIO_u8SetPinValue(DIO_PORTC,PIN7,HIGH);
				}
				else if (Data == '4') {
					DIO_u8SetPinValue(DIO_PORTC,PIN7,LOW);

				}

				else if (Data == '5') {
					break;

				}




			}




		}



		else if ((password_7_recieve ==password_7_correct )  &&(indicate_7 == 19))
		{
			while (1) {

				for (u8 i=0;i<13;i++) {
					USART_voidSend(sen_3[i]);
				}

				for (u8 i=0;i<14;i++) {
					USART_voidSend(sen_4[i]);
				}

				for (u8 i=0;i<14;i++) {
					USART_voidSend(sen_5[i]);
				}

				for (u8 i=0;i<15;i++) {
					USART_voidSend(sen_6[i]);
				}

				for (u8 i=0;i<8;i++) {
					USART_voidSend(sen_7[i]);
				}




				Data = USART_voidReceive();

				if (Data == '1') {

					TIMER1_voidSetChannel_A_CompareMatch(900 );
				}
				else if (Data == '2') {

					TIMER1_voidSetChannel_A_CompareMatch(750);
				}
				else if (Data == '3') {

					DIO_u8SetPinValue(DIO_PORTC,PIN7,HIGH);
				}
				else if (Data == '4') {
					DIO_u8SetPinValue(DIO_PORTC,PIN7,LOW);

				}

				else if (Data == '5') {
					break;

				}




			}




		}



		else if ((password_8_recieve ==password_8_correct )  &&(indicate_8 == 19))
		{
			while (1) {

				for (u8 i=0;i<13;i++) {
					USART_voidSend(sen_3[i]);
				}

				for (u8 i=0;i<14;i++) {
					USART_voidSend(sen_4[i]);
				}

				for (u8 i=0;i<14;i++) {
					USART_voidSend(sen_5[i]);
				}

				for (u8 i=0;i<15;i++) {
					USART_voidSend(sen_6[i]);
				}

				for (u8 i=0;i<8;i++) {
					USART_voidSend(sen_7[i]);
				}




				Data = USART_voidReceive();

				if (Data == '1') {

					TIMER1_voidSetChannel_A_CompareMatch(900 );
				}
				else if (Data == '2') {

					TIMER1_voidSetChannel_A_CompareMatch(750);
				}
				else if (Data == '3') {

					DIO_u8SetPinValue(DIO_PORTC,PIN7,HIGH);
				}
				else if (Data == '4') {
					DIO_u8SetPinValue(DIO_PORTC,PIN7,LOW);

				}

				else if (Data == '5') {
					break;

				}




			}




		}



		else if ((password_9_recieve ==password_9_correct )  &&(indicate_9 == 20))
		{
			while (1) {

				for (u8 i=0;i<13;i++) {
					USART_voidSend(sen_3[i]);
				}

				for (u8 i=0;i<14;i++) {
					USART_voidSend(sen_4[i]);
				}

				for (u8 i=0;i<14;i++) {
					USART_voidSend(sen_5[i]);
				}

				for (u8 i=0;i<15;i++) {
					USART_voidSend(sen_6[i]);
				}

				for (u8 i=0;i<8;i++) {
					USART_voidSend(sen_7[i]);
				}




				Data = USART_voidReceive();

				if (Data == '1') {

					TIMER1_voidSetChannel_A_CompareMatch(900 );
				}
				else if (Data == '2') {

					TIMER1_voidSetChannel_A_CompareMatch(750);
				}
				else if (Data == '3') {

					DIO_u8SetPinValue(DIO_PORTC,PIN7,HIGH);
				}
				else if (Data == '4') {
					DIO_u8SetPinValue(DIO_PORTC,PIN7,LOW);

				}

				else if (Data == '5') {
					break;

				}




			}




		}



		else if ((password_10_recieve ==password_10_correct )  &&(indicate_10 == 20))
		{
			while (1) {

				for (u8 i=0;i<13;i++) {
					USART_voidSend(sen_3[i]);
				}

				for (u8 i=0;i<14;i++) {
					USART_voidSend(sen_4[i]);
				}

				for (u8 i=0;i<14;i++) {
					USART_voidSend(sen_5[i]);
				}

				for (u8 i=0;i<15;i++) {
					USART_voidSend(sen_6[i]);
				}

				for (u8 i=0;i<8;i++) {
					USART_voidSend(sen_7[i]);
				}




				Data = USART_voidReceive();

				if (Data == '1') {

					TIMER1_voidSetChannel_A_CompareMatch(900 );
				}
				else if (Data == '2') {

					TIMER1_voidSetChannel_A_CompareMatch(750);
				}
				else if (Data == '3') {

					DIO_u8SetPinValue(DIO_PORTC,PIN7,HIGH);
				}
				else if (Data == '4') {
					DIO_u8SetPinValue(DIO_PORTC,PIN7,LOW);

				}

				else if (Data == '5') {
					break;

				}




			}




		}



		
	}



}