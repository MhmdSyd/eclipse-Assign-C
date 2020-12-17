#include <stdio.h>
#include <stdlib.h>

int main(void) {
	/*int i , sum = 0 ;
	for(i=0;i<=100;i++)
	{
		sum +=i;
	}
	printf("%d",sum);
	*/

	int n=100 , sum ;
	sum = (n*(n+1))/2;
	printf("%d",sum);

	return 0;
}
