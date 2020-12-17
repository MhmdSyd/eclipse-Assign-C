

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	unsigned int number;
	int remender2,remender3;
	scanf("%d",&number);
	remender2 = number % 2;
	remender3 = number % 3;
	if(remender2!=0 && remender3 != 0)
	{
		printf("The number is prime");
	}else
	{
		printf("The number isn't prime");
	}

	return 0;
}
