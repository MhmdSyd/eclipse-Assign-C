/*
 * 2.c
 *
 *  Created on: Jul 7, 2019
 *      Author: Mohamed Elsayed
 */
#include <stdio.h>


_Bool call(char);

int main(void)
{
	unsigned char ch ;
	scanf("%c",&ch);
	_Bool check ;
	check = call(ch);
	check == 1 ? printf("char is an alphabet\n"): printf("char is not an alphabet\n");
	return 0 ;
}

_Bool call(char ch)
{
	int num = (int)ch;
	if((num > 64 && num <=90)||(num > 96 && num <=122))
	{

		return 1;
	}else
	{

	return 0;
	}

}
