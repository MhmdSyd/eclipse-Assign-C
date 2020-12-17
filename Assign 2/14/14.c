#include <stdio.h>

int series(int* , int*);

int main(void)
{
	int i , numb1 = 0 ,numb2 = 1,sum , index;
	scanf("%d",&index);
	printf("%d  %d",numb1,numb2);
	for(i=2 ; i <= index; i++)
	{
		sum = series(&numb1 , &numb2);
		printf("  %d", sum);
	}

	return 0 ;
}

int series(int* numb1 , int* numb2)
{
	int sum = *numb1 + *numb2 ;
	*numb1 = *numb2 ;
	*numb2 = sum;
	return sum ;
}
