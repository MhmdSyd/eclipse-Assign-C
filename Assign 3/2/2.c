/*
 * 2.c
 * given a string, return TRUE if all characters are distinct and FALSE if any character is repeated
 *  Created on: Jul 11, 2019
 *      Author: Mohamed Elsayed
 */
#include <stdio.h>

_Bool check(unsigned char [] , unsigned char  []);

int main(void)
{
	_Bool checker ;
	unsigned char arr[100];
	unsigned char arrReturn[256];
	gets(arr);
	checker = check(arr , arrReturn);
	if(checker == 1)
	{
		printf("True");
	}else if(checker == 0)
	{
		printf("False");
	}


	return 0 ;
}

_Bool check(unsigned char arr[] , unsigned char arrReturn [])
{


	unsigned char digit , number = 0;
	for(int i = 0 ; i < 256 ; i++)
		{
			arrReturn[i] = 0;
		}
	while(arr[number] != '\0')
	{
		number++;
	}
	for(int i = 0 ; i < number ; i++)
	{

		digit = arr[i];
		arrReturn[digit] ++;
	}
	for(int i = 0; i < 256 ; i++)
		{

		if(arrReturn[i] > 1)
			{
				return 0 ;
			}else{}
		}

	return 1;
}
