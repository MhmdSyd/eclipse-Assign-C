/*
 * 12.c
 *
 *  Created on: Jul 16, 2019
 *      Author: Mohamed Elsayed
 */

#include <stdio.h>
#define   N   100
void length(char * ,int*);

int main(void)
{
	int n =0;
	char arr[N];
	scanf("%[^\n]",arr);

	length(arr,&n);
	printf("%d",n);
	return 0;
}

void length(char *arr,int *n)
{
	while(arr[*n] !='\0')
	{
		(*n)++;
	}
	return;
}



