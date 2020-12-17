/*
 * 17.c
 *
 *  Created on: Jul 16, 2019
 *      Author: Mohamed Elsayed
 */
#include <stdio.h>
#define  N 10

void swap1(int,int*,int,int*);
void readArray(int*,int);
void printArray(int *,int);

int main(void)
{
	int arrA[N];
	int arrB[N-3];
	readArray(arrA,N);
	readArray(arrB,N-3);
	swap1(N,arrA,N-3,arrB);
	printArray(arrA,N-3);
	printArray(arrB,N-3);
}

void readArray(int *arr,int n)
{

	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	return;
}

void swap1(int nA,int*arrA,int nB,int*arrB)
{
	for(int i=0;i<nB;i++)
	{
		arrA[i]=arrA[i]+arrB[i];
		arrB[i]=arrA[i]-arrB[i];
		arrA[i]=arrA[i]-arrB[i];
	}
	return;
}

void printArray(int *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return ;
}
