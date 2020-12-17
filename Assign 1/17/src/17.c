#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int num,x,sum=0;
	scanf("%d",&num);
	while(num!=0)
	{
		x=num%10;
		sum += x;
		num = num/10;
	}

	printf("%d",sum);

	return 0;
}
