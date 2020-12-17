/*
 * 20.c
 *Write a C function that return 0 if a given number is a power of 3, otherwise return 1.
 *  Created on: Jul 10, 2019
 *      Author: Mohamed Elsayed
 */
#include <stdio.h>

_Bool check(unsigned int number);

int main(void)
{
	unsigned int number ;
	_Bool checker ;
	scanf("%u", &number);
	checker = check(number);
	printf("%d",checker);
	return 0;
}

_Bool check(unsigned int number)
{
	unsigned int remind , divid;
	_Bool checker ;
	divid = number ;
	do{
		remind = divid % 3;
		divid /= 3;
		if(remind == 0)
		{
			if(divid == 1)
			{
				checker = 1;
				return checker;
			}else{}
		}else
		{
			checker = 0 ;
			break;
		}
	}while(divid > 1);
	return checker;
}
