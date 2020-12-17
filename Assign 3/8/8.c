/*
 * 8.c
 *	1, 3, 9, 27, …series
 *  Created on: Jul 16, 2019
 *      Author: Mohamed Elsayed
 */
#include <stdio.h>

void multiThree(unsigned int*);

int main(void)
{
	unsigned int term;
	scanf("%u",&term);
	multiThree(&term);
	printf("%d",term);
	return 0;
}

void multiThree(unsigned int *term)
{
	if(1==*term) return ;
	int n = *term;
	*term =3;
	for(int i=1;i<(n-1);i++)
	{
		*term *= 3;
	}
	return;
}
