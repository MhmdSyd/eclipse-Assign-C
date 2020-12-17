/*
 * 7.c
 *program that computes the nth term of the arithmetic series:	1, 3, 5, 7, 9,
 *  Created on: Jul 16, 2019
 *      Author: Mohamed Elsayed
 */
#include <stdio.h>

void printser(int*);

int main(void)
{
	int number;
	scanf("%d",&number);
	printser(&number);
	 printf("%d ",number);
	return 0 ;
}

void printser(int *number)
{

	*number *= 2 ;
	*number -=1;
	return ;;
}
