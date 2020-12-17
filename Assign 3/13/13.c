/*
 * 13.c
 *
 *  Created on: Jul 16, 2019
 *      Author: Mohamed Elsayed
 */
#include <stdio.h>
#define   N   100

void remove1(char*,int*);

int main(void)
{
	int n =0;
	char arr[N];
	scanf("%[^\n]",arr);
	while(arr[n] !='\0')
		{
			n++;
		}
	remove1(arr,&n);
	printf("%s",arr);

	return 0;
}

void remove1(char *arr , int *n)
{
	int j=0;
	char temp;
	for(int i=0;i<*n;i++)
		{
			if((arr[i]<91 && arr[i]>64 )||(arr[i]<123 && arr[i]>96 ))
			{
				temp =arr[i];
				arr[i]='\0';
				arr[j]=temp;
				j++;
			}else
			{
				arr[i]='\0';
			}
		}
		return;
}
