/*
 * 3.c
 *
 *  Created on: Aug 1, 2019
 *      Author: Mohamed Elsayed
 */
#include <stdio.h>

typedef struct comp{
	float real;
	float imag;
} complex;
void add(complex *,complex *);


int main(void)
{
	complex numb1,numb2;
	scanf("%f%f",&numb1.real,&numb1.real);
	scanf("%f%f",&numb2.real,&numb2.real);
	add(numb1,numb2);
	printf("%f    %f",numb1.real,numb1.imag);
	return 0;
}

void add(complex numb1,complex numb2)
{
	numb1.real=numb1.real+numb2.real;

	numb1->imag=numb1->imag+numb2->imag;
}

