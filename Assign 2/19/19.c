/*
 * *
**Given a positive integer z, check if z can be written as 𝑝^𝑞,
**Given where p and q are positive integers than 1,
**Given if z can be written as 𝑝𝑞 return 1 else return 0.
*/
#include <stdio.h>
#include <math.h>

_Bool expose(unsigned int);													// declaration function that check number .

int main(void)																			// main function start .
{
	_Bool checker;																	// main local variable .
	unsigned int z ;
	scanf("%u",&z);																	// number enter by user .
	checker = expose(z);															// check that number can be written as 𝑝^𝑞 or not .
	printf("%d",checker);															// print 1 if number can be written as 𝑝^𝑞 and 0 other wise .
	return 0;
}

_Bool expose(unsigned int number)										//  definition function that check number .
{
	unsigned int i , remind , divid ;											// expose local variable
	_Bool checker = 0;
	for(i=2 ; i<=sqrt(number);i++)											// start of checking , end at square of number to optimize .
	{
	    divid = number ;															// initial divide variable every change for i .
		do{																				// can we use nested for but i use do while .
		    remind = divid%i;													// reminder of number by i .
			divid /= i ;																// divide number by i and store it in divide variable again .
			if(remind == 0)														// checking that reminder = 0 .
			{
			    if(divid == 1)														// if true check also that divide= 1 .
                {
			    checker = 1;														// if  two condition true function return true .
				return checker ;
                }
			}else{
			    checker =0;														// if  any two condition false break .
                break;
			}
		}while (divid > 1);													// if divide number is still > 1 do code again .
	}
	return checker ;														//  if checking finished and checker is still 0 function return 0 .
}
