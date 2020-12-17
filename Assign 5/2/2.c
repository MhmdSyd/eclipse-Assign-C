/*
 * 2.c
 *
 *  Created on: Aug 1, 2019
 *      Author: Mohamed Elsayed
 */
#include <stdio.h>

typedef struct distance{
	float inch;
	float foot;
} Distance;

float convert(float*,float*);

int main(void)
{
	Distance dis;
	scanf("%f%f",&dis.foot,&dis.inch);
	float Dis_CM =convert(&dis.foot,&dis.inch);
	printf("%f",Dis_CM);
	return 0;
}

float convert(float *foot,float *inch)
{
	float disByCM =(*foot*12+*inch)*2.54;
	return disByCM;
}
