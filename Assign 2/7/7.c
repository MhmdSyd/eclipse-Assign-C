/*
 * 7.c
 *
 *  Created on: Jul 8, 2019
 *      Author: Mohamed Elsayed
 */
#include <stdio.h>

_Bool check( int , int);																		// check function declaration

int main (void)
{
	int numb1 , numb2 ;																	// local main variable .
	_Bool checker;																			// checker variable.
	scanf("%d%d",&numb1 ,&numb2);										  // enter number by user.
	checker = check(numb1 , numb2);									    // call check function by value.
	if(checker == 1)
	{
		printf("the first is multiple of the second.");							// print that number 1 is multiple of the second or not .
	}else if(checker == 0)
	{
		printf("the first is not multiple of the second.");				// print that number 1 is multiple of the second or not .
	}
	return 0 ;
}

_Bool check(int numb1 , int numb2)											// check function definition .
{
	_Bool x ;
	if((numb1%numb2)==0)													//check that number 1 is multiple of the second or not .
	{
		x = 1;
	}else
	{
		x = 0 ;
	}
	return x ;																			// return check result .
}
