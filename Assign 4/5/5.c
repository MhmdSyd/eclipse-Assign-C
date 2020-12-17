/*
 * 5.c
 *
 *  Created on: Jul 17, 2019
 *      Author: Mohamed Elsayed
 */

#include <stdio.h>
#define   N 10

void copy(int*,int*);
void printArr(int*);

int main(void)
{
	int *ptrArray;
	int *ptrArrayCopy;
	int Array[N] = {22,87,43,12,8,10,13,23,34,17};
	int ArrayCopy[N];
	ptrArray =Array;
	ptrArrayCopy =ArrayCopy;
	copy(ptrArray,ptrArrayCopy);
	printArr(ptrArrayCopy);
	return 0;
}

void copy(int *ptrArray ,int *ptrArrayCopy)
{
	for(int i=0;i<N;i++)
	{
		*(ptrArrayCopy+i)=*(ptrArray+i);
	}

	return;
}

void printArr(int*ptrArray)
{
	for(int i=0;i<N;i++)
	{
		printf("%d ",*(ptrArray++));
	}
	return;
}

