/*
 * 6.c
 *return the index of FIRST occurrence of a number in a given array
 *  Created on: Jul 15, 2019
 *      Author: Mohamed Elsayed
 */

#include <stdio.h>
#define  N    10

int occurr(int*,int,int);

int main(void)
{
	int index ,numb;
	int arr[N]={4,6, 3,9,0,2,7,1,9,10};
	scanf("%d",&numb);
	index = occurr(arr,N,numb);
	printf("%d",index);
	return 0 ;
}

int occurr(int *arr,int n ,int numb)
{
	for(int i =n-1 ;i>=0 ; i--)
	{
		if(numb == arr[i])
		{
			return i;
		}
	}
	return -1;
}
