
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n , z , x=1,i,j;
	scanf("%d",&n);
	z=n;
	for(j=0;j<=n;j++)
	{
		for(i=0;i<z;i++)
		{
			printf(" ");
		}
		for(i=0;i<x;i++)
		{
			printf("*");
		}
		for(i=0;i<z;i++)
		{
			printf(" ");
		}

			z--;
			x+=2;
			printf("\n");

	}

	return 0;
}
