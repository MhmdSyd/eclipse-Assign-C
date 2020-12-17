/*
 * 15.c
 *
 *  Created on: Jul 16, 2019
 *      Author: Mohamed Elsayed
 */
#include <stdio.h>
#define  N   100

int length(char*);
void concat(char*, char* ,int*,int*);

int main(void)
{
	int n1,n2;
	char str1[N];
	char str2[N];
	gets(str1);
	gets(str2);
	n1 = length(str1);
	n2 = length(str2);
	concat(str1,str2,&n1,&n2);
	printf("%s",str1);
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

void concat(char *str1 ,char *str2 ,int *n1 ,int *n2)
{
	for(int i=*n1;i<(*n1+*n2);i++)
	{
		str1[i]=str2[i-(*n1)];
	}
	str1[*n1+*n2]='\0';
	return;
}
