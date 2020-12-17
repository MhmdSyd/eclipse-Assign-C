/*
 * 4.c
 *
 *  Created on: Jul 17, 2019
 *      Author: Mohamed Elsayed
 */
#include <stdio.h>
#define   N 10

void smallest(int*,int*);

int main(void)
{
	int *ptrArray;
	int small;
	int Array[10] = {22,87,43,12,8,10,13,23,34,17};
	ptrArray =Array;
	small=Array[0];
	smallest(ptrArray,&small);
	printf("%d",small);
	return 0;
}

void smallest(int *ptrArray ,int *small)
{
	for(int i=1 ; i<N;i++)
	{
		if(*small>*(ptrArray++))
		{
			*small =*(ptrArray-1);
		}
	}
	return;
}
