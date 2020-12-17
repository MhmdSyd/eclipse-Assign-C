/*
 * 1.c
 *
 *  Created on: Jul 17, 2019
 *      Author: Mohamed Elsayed
 */
#include <stdio.h>


int main(void)
{

	unsigned char x,y=169;

	x = ~(y & (1<<3));
	printf("%d",x);

	return 0;
}

