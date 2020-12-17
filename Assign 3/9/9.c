/*
 * 9.c
 *
 *  Created on: Jul 16, 2019
 *      Author: Mohamed Elsayed
 */
#include <stdio.h>
#define   N   100
void convert(char * ,int);

int main(void)
{
	int n =0;
	char arr[N];
	scanf("%[^\n]",arr);
	while(arr[n] !='\0')
	{
		n++;
	}
	convert(arr,n);
	printf("%s",arr);
	return 0;
}

void convert(char *arr,int n)
{
	for(int i =0 ;i<n;i++)
	{
		if(64<arr[i] && arr[i] < 91)
		{
			arr[i] +=32;
		}
	}
	return;
}
