/*
 * 3.c
 *
 *  Created on: Jul 7, 2019
 *      Author: Mohamed Elsayed
 */
#include <stdio.h>

void check(int);
int main(void)
{
	int number ;
	do{


	scanf("%d",&number);
	}while(number == 0);
	check(number);

	return 0 ;
}
void check(int number)
{
	number >0 ? printf("The number is Positive"):printf("The number is negative");
	return ;
}
