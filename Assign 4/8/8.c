/*
 * 8.c
 *
 *  Created on: Jul 23, 2019
 *      Author: Mohamed Elsayed
 */
#include <stdio.h>
#define N   10

void SwapArray(int*,int*);
void printArr(int *);

int main(void)
{
	int arr1[N]={34,54,32,67,87,43,22,11,90,13};
	int arr2[N]={43,22,34,56,52,76,78,87,58,87};
	SwapArray(arr1,arr2);
	printArr(arr1);
	printArr(arr2);
	return 0;
}

void SwapArray(int *arrptr1,int *arrptr2)
{
	for(int i=0;i<N;i++)
	{
		*arrptr1= *arrptr1^*arrptr2;
		*arrptr2= *arrptr1^*arrptr2;
		*arrptr1 = *arrptr1^*arrptr2;
		arrptr1++;
		arrptr2++;
	}
	return;
}

void printArr(int *arrPtr)
{
	for(int i=0;i<N;i++)
		{
			printf("%d  ",*(arrPtr++));

		}
	printf("\n");

}
