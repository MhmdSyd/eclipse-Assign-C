/*
 * 10.c
 *
 *  Created on: Jul 8, 2019
 *      Author: Mohamed Elsayed
 */
#include <stdio.h>

int check( int);

int main(void)
{
	int number , holes ;
	scanf("%d",&number);
	holes = check(number);
	printf("%d",holes);
}

 int check( int number)
{
	 int  holes = 0  , remain ;
	 do
	 {
		remain = number%10 ;
		number /= 10 ;
		if(remain ==8)
		{
			holes += 2;
		}else if(remain == 0 || remain ==4 || remain ==6 || remain ==9)
		{
			holes++;
		}else{}

	 }while(number > 0);
	return holes ;
}

