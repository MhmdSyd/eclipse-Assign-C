/*
 * 4.c
 *
 *  Created on: Jul 7, 2019
 *      Author: Mohamed Elsayed
 */
#include <stdio.h>

float call(int* ,char ,float , float);//declaration call function.

int main(void)
{
	float numb1 , numb2 , operat_return;
	int  x = 0;
	char operate;
	scanf("%c%f%f",&operate , &numb1, &numb2); // value enter by user. operation , number1 , number 2
	operat_return = call(&x ,operate , numb1, numb2); //  operation result return from call function
	if(x==0)																		 // check that operation enter by user correctly.
	{
	printf("The result = %.3f",operat_return);						// print the result value on screen.
	}else{}
	return 0 ;
}

float  call(int* y ,char operate ,float numb1 , float numb2) //call function definition
{
	float value = 0.00;																// return value by this function.
	if(operate == 43)																// check which operate enter by user
	{
		value = numb1 + numb2 ;
	}else if(operate == 45)
	{
		value = numb1 - numb2 ;
	}else if(operate == 42)
	{
		value = numb1 * numb2 ;
	}else if(operate == 47)
	{
		value = numb1 / numb2 ;
	}else																						// if user enter wrong operation will print that is error.
	{
		printf("there is an operation error \n");
		*y = 1;
	}
	return value;
}
