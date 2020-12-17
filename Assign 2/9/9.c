/*
 * 9.c
 *
 *  Created on: Jul 8, 2019
 *      Author: Mohamed Elsayed
 */
#include <stdio.h>

void swap(int* , int*);																	// swap function declaration.

int main(void)																				// main function start .
{
	int numb1 , numb2 ;
	scanf("%d%d",&numb1,&numb2);
	swap(&numb1 , &numb2);
	printf("%d\t%d",numb1 , numb2);

	return 0 ;
}

void swap(int *numb1 , int *numb2)												// swap function definition.
{
	int  y =*numb1;
	*numb1 = *numb2;
	*numb2 = y;

	return ;
}

