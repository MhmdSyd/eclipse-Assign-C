#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int num1,num2;
	scanf("%d%d",&num1,&num2);
	if(num1 == num2)
	{
		printf("numbers are equal");
	}else if(num1 > num2)
	{
		printf("numbers are not equal and num1 has higher value.");
	}else if(num2 > num1)
	{
		printf("numbers are not equal and num2 has higher value.");
	}

	return 0;
}
