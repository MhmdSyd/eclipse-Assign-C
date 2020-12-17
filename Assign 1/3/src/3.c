#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int temp,fahr;
	scanf("%d",&temp);
	fahr = ((9*temp)/5)+32;
	printf("Temperature in Fahrenheit = %d",fahr);

	return 0;
}
