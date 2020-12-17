#include <stdio.h>
long long cub(int);
int dfsaa= 5 ;

int main(void)
{
	int num ;
	long long cube ;
	scanf("%d",&num);
	cube = cub(num) + 5;
	printf("%lld",cube);
	return 0 ;
}
long long cub(int num)
{
	return num * num * num ;
}
