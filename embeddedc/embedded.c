/*
 * embedded.c
 *
 *  Created on: Aug 29, 2019
 *      Author: Mohamed Elsayed
 */
#include  "include.h"
extern int a;
extern float b;

void fun(void);
int main(void){
	int z= a*5;
	float y=b*2;
	printf("%d   %f",z,y);
	fun();
	return 0;
}


void fun(void){
register  int d=20;
	printf("\n%d",d);
	return;
}
