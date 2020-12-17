#include <stdio.h>
#include <stdlib.h>

int main(void) {
	unsigned int n,i;
	unsigned int factorial = 1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		factorial *= i ;

	}
	printf("%u",factorial);

	return 0;
}
