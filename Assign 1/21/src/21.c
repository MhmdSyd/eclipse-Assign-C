#include <stdio.h>
#include <stdlib.h>

int main(void) {


	unsigned int n , i , j ;
	scanf("%d",&n);
	//printf("%d\n",n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j || j==(n-(i+1)))
			{
				printf("*");
			/*}else if(j==(n-(i+1)))
			{
				printf("*");*/
			}else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;

}
