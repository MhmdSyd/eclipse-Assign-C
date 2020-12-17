#include <stdio.h>
#include <stdlib.h>

int main(void) {

	unsigned int num , power,i,product;
	scanf("%d%d",&num,&power);
	product = num;
	for(i=2;i<=power;i++)
	{
		product *=num ;
	}
	printf("%d",product);

	return 0;
}
