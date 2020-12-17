/*
 * 15.c
 *
 *  Created on: Jul 9, 2019
 *      Author: Mohamed Elsayed
 */
#include <stdio.h>

char binary[8];																		// global array.
void reverse(char[]);														       // reverse function declaration.

int main(void)																		  // main function .
{
    char binary[8];
    for(int i = 0 ; i<8 ; i++)        											 // enter binary number by user .
    {
        scanf("%c",&binary[i]);
    }
    reverse(binary);																// reverse binary number function calling.
    for(int i = 0 ; i<8 ; i++)													// print reverse number .
    {
    printf("%c",binary[i]);
    }

    return 0 ;
}

void reverse(char binary[])												// reverse number definition .
{
    int y ;
    for(int i = 0 ;i<4 ; i++)											  // reverse number.
    {
      y = binary[i];
      binary[i] = binary[7-i];
      binary[7-i] = y;
    }

    return;
}


