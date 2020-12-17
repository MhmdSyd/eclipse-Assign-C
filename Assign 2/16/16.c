/*
 * 16.c
 *
 *  Created on: Jul 9, 2019
 *      Author: Mohamed Elsayed
 */
#include <stdio.h>

int sumOnes(unsigned int );

int main(void)
{
	int result;
	unsigned int number ;
	scanf("%u",&number);
	result = sumOnes(number);
	printf("%d",result);

	return 0;
}

int sumOnes(unsigned int number)
{
	int remind;
	int sum =0 ;
	do{
		remind = number % 2;
		number /= 2;
		if(remind == 1)sum++;
	}while(number != 0);

	return sum ;
}
