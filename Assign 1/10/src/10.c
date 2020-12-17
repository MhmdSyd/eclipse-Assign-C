#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char operate;
	int num1,num2,convert,result;
	scanf("%c%d%d",&operate,&num1,&num2);
	convert = operate;

	switch(convert)
	{
	case 42: result=num1*num2;
	break;
	case 43: result=num1+num2;
	break;
	case 45: result=num1-num2;
	break;
	case 47: result=num1/num2;
	break;
	}

	printf("%d",result);


	return 0;
}
