#include <stdio.h>

_Bool powerTow(int);																			// power tow function declaration.

int main(void)																						// start main function .
{
	_Bool checker ;																				// local variable .
	int number ;
	scanf("%d",&number);																//  enter test number by user .
	checker = powerTow(number);													// call power tow function
	if(checker == 1)																			// check reminder value .
	{
		printf("the input number is a power of 2 ");								// if number = 0 & reminder =1 that means.
	}else{																							// the number is a power of 2
		printf("the input number is not a power of 2");						// else he number is not a power of 2
	}
}

_Bool powerTow(int number)														// power tow function definition .
{
	int remend ;																			// local power function variable .
	_Bool checker;
	do{																							// divided number by 2 else reminder = 1 .
		remend = number % 2;
		number /= 2;


	}while(remend == 0);
	if(number ==0)																	// if number = 0 & reminder =1 that means.
	{
		checker =1;																		// checker return 1 to print the number is a power of 2
	}else{checker = 0 ;} 													// checker return 0 to print the number is a power of 2
	return checker ;
}
