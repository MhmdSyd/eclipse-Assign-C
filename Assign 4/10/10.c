/*
 * 10.c
 *
 *  Created on: Jul 31, 2019
 *      Author: Mohamed Elsayed
 */
#include <stdio.h>

void Swap(int**,int**);

int main(void)
{
	int x=10;
	int y =20;
	int *xptr=&x;
	int *yptr=&y;
	int **ptr1=&xptr;
	int **ptr2=&yptr;
	printf("%p  %p\n",xptr,yptr);
	Swap(ptr1,ptr2);
	printf("%p  %p\n",xptr,yptr);
	return 0;
}

void Swap(int **ptr1,int **ptr2)
{
	int *temp=*ptr1;
	 *ptr1=*ptr2;
	 *ptr2=temp;
	return;
}
