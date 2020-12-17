/*
 * 11.c
 *
 *  Created on: Jul 16, 2019
 *      Author: Mohamed Elsayed
 */

#include <stdio.h>
#define   N   100
void frequency(char * ,int ,char ,int*);

int main(void)
{
	int freq = 0;
	int n =0;
	char arr[N];
	gets(arr);
	char character;
	scanf("%c",&character);
	while(arr[n] !='\0')
	{
		n++;
	}
	frequency(arr,n,character,&freq);
	//printf("%c  %s",character,arr);
	printf("%d",freq);
	return 0;
}

void frequency(char *arr,int n ,char character,int *freq)
{

	for(int i =0 ;i<n;i++)
	{
		if(arr[i]==character)
		{
			(*freq)++;
		}
	}
	return ;
}


