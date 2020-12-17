#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

	unsigned int x , n;
	scanf("%d",&n);
	x = sqrt(n);
	if(n == (x*x))
	{
		printf("Number is perfect square");
	}else
	{
		printf("Number isn't perfect square");
	}

	return 0;
}
