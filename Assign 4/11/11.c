/*
 * 11.c
 *
 *  Created on: Jul 31, 2019
 *      Author: Mohamed Elsayed
 */
#include <stdio.h>

void Swap(int* ,int*);

int main(void)
{
	int x=43;
	int y=23;
	int *xptr =&x;
	int *yptr =&y;
	Swap(xptr,yptr);
	printf("%d  %d",x,y);

	return 0;
}

void Swap(int *ptr1,int *ptr2)
{
	*ptr1=*ptr1^*ptr2;
	*ptr2=*ptr1^*ptr2;
	*ptr1=*ptr1^*ptr2;
	return;
}
