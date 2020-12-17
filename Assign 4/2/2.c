/*
 * 2.c
 *
 *  Created on: Jul 17, 2019
 *      Author: Mohamed Elsayed
 */
#include <stdio.h>
#define   N    100

void readString(char*);
char length(char*);

int main(void)
{
	char *ptrString;
	char str[N];
	ptrString =str;
	readString(ptrString);
	char index =length(ptrString);
	printf("%d",index);
	return 0;
}

char length(char *ptrString)
{
	char index = 0;
	for(char i=0;i<N;i++)
	{
		if(*(ptrString++) != '\0')
		{
			index++;
		}else
		{
			return index;
		}
	}
	return index;
}

void readString(char *ptrString)
{
	gets(ptrString);
	return;
}
