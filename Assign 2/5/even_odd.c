/*
 * even_odd.c
 *
 *  Created on: Jul 7, 2019
 *      Author: Mohamed Elsayed
 */
#include <stdio.h>

_Bool check(int);

int main(void)
{

	_Bool checker;
	unsigned int numb;
	do{
	scanf("%d",&numb);
	}while(numb <= 0);
	checker = check(numb);
	printf("%d",checker);
	return 0 ;
}

_Bool check(int numb)
{
 return numb%2;
}
