/*
 * 12.c
 *
 *  Created on: Jul 8, 2019
 *      Author: Mohamed Elsayed
 */
#include <stdio.h>

int activationTime(int);

int main(void)
{
	int temp , actTime;
	scanf("%d",&temp);
	actTime = activationTime(temp);
	printf("%d",actTime);

	return 0;
}

int activationTime(int temp)
{
	int actTime;
	if(temp < 30 && temp > 0)
	{
		actTime = 7;
	}else	 if(temp < 60 && temp > 30)
	{
		actTime = 5;
	}else 	if(temp < 90 && temp > 60)
	{
		actTime = 3;
	}else if(temp > 30)
	{
		actTime =1;
	}

	return actTime;
}
