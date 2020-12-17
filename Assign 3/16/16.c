/*
 * 16.c
 *
 *  Created on: Jul 16, 2019
 *      Author: Mohamed Elsayed
 */

#include <stdio.h>
#define  N   10

void readArray(int*);
void reverse(int*);
void printArray(int *);

int main(void)
{
	int arr[N];
	readArray(arr);
	reverse(arr);
	printArray(arr);
	return 0;
}

void readArray(int *arr)
{

	for(int i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
	}
	return ;
}
void printArray(int *arr)
{
	for(int i=0;i<N;i++)
	{
		printf("%d ",arr[i]);
	}
	return ;
}

void reverse(int *arr)
{
	for(int i=0;i<(N/2);i++)
	{
		arr[i]=arr[i]+arr[N-(i+1)];
		arr[N-(i+1)]=arr[i]-arr[N-(i+1)];
		arr[i]=arr[i]-arr[N-(i+1)];
	}
	return;
}
