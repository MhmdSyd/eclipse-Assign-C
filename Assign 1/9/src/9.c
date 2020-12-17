

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int x ;
	scanf("%d",&x);
	if(x>=85)
	{
		printf("Excellent");
	}
	if(x>=75 && x<85)
	{
		printf("Very Good");
	}
	if(x>=65 && x<75)
	{
		printf("Good");
	}
	if(x>=50 && x<65)
	{
		printf("Pass");
	}
	if(x<50)
	{
		printf("Fail");
	}
	return 0;
}
