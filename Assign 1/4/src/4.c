
#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592654

int main(void) {

	int Radius;
	float Area,Ocean;
	scanf("%d",&Radius);
	Area =pi*(Radius*Radius);
	Ocean = 2 * pi * Radius;
	printf("Area = %f\n",Area);
	printf("Circumference = %f\n",Ocean);


	return 0;
}
