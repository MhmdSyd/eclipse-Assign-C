/*
 * 9.c
 *
 *  Created on: Jul 31, 2019
 *      Author: Mohamed Elsayed
 */
#include <stdio.h>
#define   N 100

void newString(char *,char *);

int main(void)
{
	char str[N];
	char newStr[4];
	gets(str);
	newString(str,newStr);
	printf("%s",newStr);
	return 0;
}

void newString(char *ptr,char *ptrNew)
{
	while(*(ptr) != '\0')
	{
		ptr++;
	}
	ptr--;
	ptrNew[0]=*ptr;
	ptr--;
	ptrNew[1]=' ';
	ptrNew[2]=*ptr;
	ptrNew[3]='\0';
	return;
}

