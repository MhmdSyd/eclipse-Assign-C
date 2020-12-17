/*
 * 6.c
 *
 *  Created on: Jul 23, 2019
 *      Author: Mohamed Elsayed
 */
#include <stdio.h>
#define   N   10



int main(void)
{
	int arr[N]={10,34,56,345,12,76,98,32,98,55};
	int *arrPtr[N];
	int *maxPtr;
	for(int i=0;i<N;i++)
	{
		arrPtr[i]=&arr[i];
	}

	maxPtr =arr;
	for(int i=0;i<N;i++)
	{
		printf("%d ",*arrPtr[i]);
		if(*maxPtr <*arrPtr[i])
		{
			*maxPtr =*arrPtr[i];
		}
	}
	printf("\n%d ",*maxPtr);
	return 0;
}
