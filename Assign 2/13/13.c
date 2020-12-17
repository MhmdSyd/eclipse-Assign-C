/*
 * 13.c
 *	function that return integer the sum of two float number .
 *  Created on: Jul 8, 2019
 *      Author: Mohamed Elsayed
 */
#include <stdio.h>

int sumFloor(float , float);

int main(void)
{
	float numb1 , numb2 ;
	int floor;
	scanf("%f%f",&numb1 , &numb2);
	floor = sumFloor(numb1 , numb2);
	printf("%d", floor);
	return 0;
}

int sumFloor(float numb1 , float numb2)
{
	int y = (int)(numb1 + numb2);
	return y ;
}
