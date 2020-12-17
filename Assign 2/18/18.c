/*
 * 18.c
 *Given two integers: L and R, Find the maximal value of A x or B where
	A and B satisfy the condition L =< A <= B <= R Constrains: 1 <= L <= R <=
	1000
 *  Created on: Jul 9, 2019
 *      Author: Mohamed Elsayed
 */
#include <stdio.h>

short XOR(short , short);

int main(void)
{
	short numb1 , numb2 ,maxValue ;

	scanf("%hi%hi",&numb1 , &numb2);
	maxValue = XOR(numb1 , numb2);
	printf("%hi",maxValue);
	return 0;
}

short XOR(short numb1 , short numb2)
{
	short checker = 0 ;
	short result ;
	for(int i=numb1 ; i <= numb2 ; i++)
	{
		for(int j =i ; j <= numb2 ; j++)
		{
			result = i^j;
			if(checker < result)checker = result;
		}
	}
	return checker ;
}
