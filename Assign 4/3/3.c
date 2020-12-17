/*
 * 3.c
 *
 *  Created on: Jul 17, 2019
 *      Author: Mohamed Elsayed
 */
#include <stdio.h>
#define   N 10

void reversePrint(int*);

int main(void)
{
	int *ptrArray;
	int Array[10] = {0,1,2,3,4,5,6,7,8,9};
	ptrArray =&Array[9];
	reversePrint(ptrArray);
	return 0;
}

void reversePrint(int *ptrArray)
{
	for(int i=0 ; i<N;i++)
	{
		printf("%d ",*(ptrArray--));
	}
	return;
}
