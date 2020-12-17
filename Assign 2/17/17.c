/*
 * 17.c
 *
 *  Created on: Jul 9, 2019
 *      Author: Mohamed Elsayed
 */
#include <stdio.h>

char sumOnes(unsigned char );

int main(void)
{
	char result;
	unsigned char number ;
	scanf("%d",&number);
	result = sumOnes(number);
	printf("%d",result);

	return 0;
}

char sumOnes(unsigned char number)
{
	char remind;
	char sum =0 ;
	do{
		remind = number % 2;
		number /= 2;
		if(remind == 1)sum++;
	}while(number != 0);

	return sum ;
}
