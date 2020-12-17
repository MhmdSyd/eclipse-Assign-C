/*
 * 21.c
 *
 *  Created on: Jul 17, 2019
 *      Author: Mohamed Elsayed
 */
/*
 * 20.c
 *
 *  Created on: Jul 17, 2019
 *      Author: Mohamed Elsayed
 */
#include <stdio.h>
#define   N   100

int arrMaker(int*,int*,int*);
void printArr(int*,int);

int main(void)
{
	int lowerValue,upperValue,index;
	int arr[N];
	scanf("%d%d",&lowerValue,&upperValue);
	index =arrMaker(arr,&lowerValue,&upperValue);
	printArr(arr,index);
	return 0;
}

int arrMaker(int*arr,int *lowerValue,int *upperValue)
{
	int i;
	int start = *upperValue ;
	if(*lowerValue > *upperValue)
	{
		arr[0]=0xff;
		arr[1]=0xff;
		return 2;
	}
	for( i=0;i<N;i++)
	{
		if(start >= *lowerValue)
		{
			arr[i]=	start;
			start--;
		}else
		{
			return i;
		}
	}
	return i;
}

void printArr(int *arr,int index)
{
	for(int i=0;i<index;i++)
	{
		printf("%d ",arr[i]);
	}
	return;
}


