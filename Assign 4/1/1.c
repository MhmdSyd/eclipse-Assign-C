/*
 * 1.c
 *
 *  Created on: Jul 17, 2019
 *      Author: Mohamed Elsayed
 */
#include <stdio.h>
#define  N  10

void sumArray(char*,char*);

int main(void)
{
	char sum =0;
	char *ptrArray;
	char arr[N]={1,2,3,4,5,6,7,8,9,0};
	ptrArray =arr;
	sumArray(ptrArray,&sum);
	printf("%d",sum);
	return 0;
}

void sumArray(char *ptrArray,char *sum)
{
	for(char i=0;i<N;i++)
	{
		*sum += *(ptrArray++);
	}
	return;
}

