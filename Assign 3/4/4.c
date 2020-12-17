/*
 * 4.c
 *	the selection sorting algorithm
 *  Created on: Jul 15, 2019
 *      Author: Mohamed Elsayed
 */
#include <stdio.h>
#define  N    10

void readArray(int*);
void swap(int*);
void printArr(int* , int);

int main(void)
{

	int arr[N];
	readArray(arr);
	swap(arr);
	printArr(arr,N);
	return 0 ;

}

void readArray(int *arr)										//readArray function .
{

	for(int i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
	}
	return ;
}

void swap(int *arr)								// swap function.
{
		int *numb1 ;
		int numb2;
		for(int i=0;i<N;i++)
		{
			numb2 =arr[i];
			numb1 = &arr[i];

			for(int j=i+1;j<N;j++)
			{
				if(arr[j]<numb2)
				{
				numb2 = arr[j];
				numb1=&arr[j];
				}
			}
			if(numb1 != &arr[i])
			{
				*&arr[i] =*&arr[i] ^*numb1;										// swap numbers use XOR method that is the best way to swap .
				*numb1 = *&arr[i]^*numb1;
				*&arr[i] = *&arr[i] ^ *numb1;
			}
		}
	return;
}

void printArr(int *arr ,int n)							// print array function .
{
	for(int i =0 ; i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
	return;
}

