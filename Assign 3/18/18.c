/*
 * 18.c
 *
 *  Created on: Jul 16, 2019
 *      Author: Mohamed Elsayed
 */
#include <stdio.h>
#define  N 20

int count(int*);
void readArray(int*);

int main(void)
{
	int n;
	int arr[N];
	readArray(arr);
	n=count(arr);
	printf("%d",n);
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

int count(int *arr)
{
	int n=1,j=1;
	for(int i=0;i<N;i++)
	{
		if(arr[i]==arr[i-1])
		{
			j++;
		}else
		{
			if(n<j)
			{
				n=j;
			}
			j =1;
		}
	}
	if(n<j)
	{
		n=j;
	}
	return n;
}
