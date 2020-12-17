/*
 * 6.c
 *
 *  Created on: Jul 7, 2019
 *      Author: Mohamed Elsayed
 */
#include <stdio.h>

char transform(char); 													 //declaration transform function.

int main(void) 																 //start main function .
{
	char letter;

	do{																		   	//check that letter is lower case alphabet.
		scanf("%c",&letter);
	}while(letter <97 || letter >122);

	printf(" %c  \n Transform complete",transform(letter));	// print upper case alphabet.

	return 0 ;
}
char transform(char letter)											//transform function definition.
{
	letter -=32;																// subtraction 32 to transform from lower case to upper case.
	return letter;															// return upper case alphabet.
}

