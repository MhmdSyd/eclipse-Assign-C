/*
 * 3.c
 *	bubble sorting algorithm
 *  Created on: Jul 12, 2019
 *      Author: Mohamed Elsayed
 */
#include <stdio.h>
#define  N    10

void swap(int* , int*);														// swap function declaration .

int main(void)																	// start main function .
{
	int i , j ;
	int arr[N] ={1,5,8,3,10,4,2,7,9,0};								// array which need sorting .
	for(i=0;i<N;i++)
	{
		for(j=0 ; j<(N-(i+1));j++)
		{
			if(arr[j]>arr[j+1])											//  condition swap number .
			{
				swap(&arr[j],&arr[j+1]);								// call swap function .
			}
		}

	}
	for(i=0 ;i<N;i++)
	{
		printf("%d  ",arr[i]);											// print array after swap .
	}
	return 0 ;
}

void swap(int *num1 , int *num2)								// swap function definition .
{
	*num1 =*num1 ^*num2;										// swap numbers use XOR method that is the best way to swap .
	*num2 = *num1^*num2;
	*num1 = *num1 ^ *num2;
	/*
	*num1 =*num1 +*num2;											// another solution swap numbers use add and sub method .
	*num2 = *num1-*num2;
	*num1 = *num1 - *num2;
	*/
	return;
}
