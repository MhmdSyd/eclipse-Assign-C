/*
 * 8.c
 *
 *  Created on: Jul 8, 2019
 *      Author: Mohamed Elsayed
 */
#include <stdio.h>

void primeNumber(int , int);												// primeNumber function declaration.

 int main(void)
 {
	 unsigned int numb1 , numb2 ;
	 scanf("%u%u",&numb1,&numb2);								// enter two interval number by user .
	 primeNumber(numb1,numb2);										// call primeNumber function .
	 return 0 ;
}

 void primeNumber(int numb1 , int numb2)						// primeNumber definition.
 {
	 unsigned int y  , i , j , checker ;										//  variable declaration

	 if(numb1>numb2)               											// check that number 1 is more than number 2 .
	 {																						// if true we will exchange the number.
		 y = numb1;
		 numb1 = numb2;
		 numb2 = y ;
	 }
	if (numb1 <= 3)																// check that number 1 is less than 3
	 {
		if(numb1 == 3)
		{
			printf("3\t");
		}else{
			printf("2\t3\t");
		}
		numb1 = 2;
	 }
	 for(i=numb1 ; i<= numb2 ; i++)												// start of  prime number operation .
	 {
		 for(j=2; j <= i/2; ++j)
		     {
		         if (i%j == 0)
		         {
				 checker=0;															// if number it  can divided  by any number then break and don't print .
		             break;
		         }else{
		        	 checker =1;												// if number it  can't divided  by any number then print .
		         }
		     }
		 if(checker==1)
		 {
		 printf("%d\t",i);														// print number  if number it  can't divided  by any number .
		 }
	 }
	 return ;
 }
