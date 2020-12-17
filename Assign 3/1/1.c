/*
 * 1.c
 *
 * sum of its individual elements of the array
 *  Created on: Jul 11, 2019
 *      Author: Mohamed Elsayed
 */
#include <stdio.h>

int summation(int , int []);

int main(void)
{
	int number , sum ;
	scanf("%d",&number);
	int arr[number];
	sum =summation(number , arr );
	printf("%d\n",sum);
	for(int i = 0 ; i < number ; i++)
	{
		printf("%d ",arr[i]);

	}
	return 0;
}

int summation(int number , int arr[])
{
	int sum = 0;
	for(int i = 0 ; i < number ; i++)
	{
		scanf("%d",&arr[i]);
		sum += arr[i];
	}
	return sum ;
}

