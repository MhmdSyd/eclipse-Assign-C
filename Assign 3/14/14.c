/*
 * 14.c
 *		reverse string
 *  Created on: Jul 16, 2019
 *      Author: Mohamed Elsayed
 */
#include <stdio.h>
#define  N   1000

int length(char*);
void reverse(char* ,int*);

int main(void)
{
	int n;
	char str[N];
	gets(str);
	n = length(str);
	reverse(str,&n);
	printf("%s",str);
	return 0;
}

int length(char *string)
{
	int n =0;
	while(string[n] != '\0')
	{
		n++;
	}
	return n;
}

void reverse(char *string ,int *n)
{
	char temp;
	for(int i=0;i<(*n/2);i++)
	{
		temp = string[(*n)-(i+1)];
		string[(*n)-(i+1)] =string[i];
		string[i] = temp;
	}
	return;
}
