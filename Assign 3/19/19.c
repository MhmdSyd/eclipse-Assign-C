/*
 * 19.c
 *
 *  Created on: Jul 17, 2019
 *      Author: Mohamed Elsayed
 */
#include <stdio.h>
#define  N 10

void readArray(int*);
_Bool compare(int* ,int*);

int main(void)
{
	int arr1[N];
	int arr2[N];
	readArray(arr1);
	readArray(arr2);
	_Bool checker = compare(arr1,arr2);
	printf("%d",checker);
	return 0;
}

void readArray(int *arr)										//readArray function .
{

	for(int i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
	}
	return ;
}

_Bool compare(int *arr1,int *arr2)
{
	for(int i=0;i<N;i++)
	{
		if(arr1[i] != arr2[i])
		{
			return 1;
		}
	}
	return 0;
}
