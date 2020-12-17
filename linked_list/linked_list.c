/*
 * linked_list.c
 *
 *  Created on: Aug 21, 2019
 *      Author: Mohamed Elsayed
 */
#include  <stdio.h>
#include <stdlib.h>

typedef struct {
	char fristName;
	char lastName;
	unsigned char age;
	float salary;
	char *ptrNext;
} EMP;

EMP *ptrHead = NULL;
EMP *ptrIndex = NULL;
EMP *ptrCreate = NULL;
EMP *ptrUpdate = NULL;
unsigned char i=0;
char frist[10]="Mohamed";
char last[10]="Elsayed";
unsigned char age1[10]={10,20,22,25,30,35,38};
float salary1[10]={123.33,234.23,250.34,345.43,435.87,576.09,678.67};

void CreateNode(void);
void Display(void);
void update(unsigned char);
void search(unsigned char);
void Delete(unsigned char);

int main(void) {
	CreateNode();
	ptrHead=ptrIndex;
	CreateNode();
	CreateNode();
	CreateNode();
	CreateNode();
	CreateNode();
	CreateNode();
	update(28);
	Display();
	printf("%p",ptrIndex->ptrNext);
	search(30);
	printf("\n%c\t%c\t%f\n",ptrIndex->fristName,ptrIndex->lastName,ptrIndex->salary);
	Delete(25);
	Display();
	return 0;
}

void CreateNode(void)
{
	ptrCreate=ptrIndex;
	ptrIndex=(EMP*) malloc(sizeof(EMP));
	if(i>0)ptrCreate->ptrNext=(char*)ptrIndex;
	ptrIndex->fristName =frist[i] ;
	ptrIndex->lastName =last[i];
	ptrIndex->age = age1[i];
	ptrIndex->salary = salary1[i];
	ptrIndex->ptrNext = NULL;
	i++;
}

void Display(void){
	ptrIndex=ptrHead;
	do{
		printf("%c\t%c\t",ptrIndex->fristName,ptrIndex->lastName);
		printf("%d\t%f\n",ptrIndex->age,ptrIndex->salary);
		ptrIndex=(EMP*)ptrIndex->ptrNext;
	}while((ptrIndex->ptrNext) != NULL);
	printf("%c\t%c\t",ptrIndex->fristName,ptrIndex->lastName);
	printf("%d\t%f\n",ptrIndex->age,ptrIndex->salary);
}

void update(unsigned char x)
{
	ptrIndex=ptrHead;
	ptrUpdate=(EMP*)malloc(sizeof(EMP));
	ptrUpdate->age=x;
	ptrUpdate->fristName='S';
	ptrUpdate->lastName='W';
	ptrUpdate->salary=478.54;
	while(ptrUpdate->age >ptrIndex->age){
		ptrCreate=ptrIndex;
		ptrIndex=(EMP*)(ptrCreate->ptrNext);
	}
	ptrCreate->ptrNext=(char*)ptrUpdate;
	ptrUpdate->ptrNext=(char*)ptrIndex;

}

void search(unsigned char v){
	ptrIndex=ptrHead;
	while(ptrIndex->age != v)
	{
		ptrCreate=ptrIndex;
		ptrIndex=(EMP*)ptrCreate->ptrNext;
	}

}

void Delete(unsigned char z)
{
	ptrIndex=ptrHead;
	while(ptrIndex->age != z)
	{
		ptrCreate=ptrIndex;
		ptrIndex=(EMP*)ptrCreate->ptrNext;
	}
	ptrCreate->ptrNext=ptrIndex->ptrNext;
	free(ptrIndex);
}
