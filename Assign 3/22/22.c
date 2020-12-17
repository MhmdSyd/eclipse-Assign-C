/*
 * 22.c
 *
 *  Created on: Jul 17, 2019
 *      Author: Mohamed Elsayed
 */
#include <stdio.h>
#define  N 10
#define  n 6

void removRepeat(int*,int*);
void printArr(int * );

int main(void)
{
	int arr1[N]={1,2,2,2,3,4,4,5,5,6};
	int arr2[n];
	removRepeat(arr1,arr2);
	printArr(arr2);
	return 0;
}

void removRepeat(int *arr1,int *arr2)
{
	int j=1;
	arr2[0] = arr1[0];
	for(int i=1;i<N;i++)
	{
		if(arr1[i] !=arr1[i-1])
		{
			arr2[j++] = arr1[i];
		}
	}
	return;
}

void printArr(int *arr)							// print array function .
{
	for(int i =0 ; i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
	return;
}

