
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n,i,j ;
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		for(i=0;i<n;i++)
		{
			if(j<=i)
			{
				printf("*");
			}
		}
		printf("\n");
	}

	return 0;
}
