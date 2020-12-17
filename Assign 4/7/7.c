/*
 * 7.c
 *
 *  Created on: Jul 23, 2019
 *      Author: Mohamed Elsayed
 */
#include <stdio.h>

void Swap(int*,int*);

int main(void)
{
	int x=29,y=45;
	Swap(&x,&y);
	printf("%d  %d",x,y);
	return 0;
}

void Swap(int *num1,int *num2)
{
	*num1 = *num1^*num2;
	*num2 = *num1^*num2;
	*num1 = *num1^*num2;
	return;
}
