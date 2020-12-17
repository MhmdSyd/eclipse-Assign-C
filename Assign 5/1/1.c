/*
 * 1.c
 *
 *  Created on: Aug 1, 2019
 *      Author: Mohamed Elsayed
 */
#include <stdio.h>
#define   N 10

struct student{
	char *name;
	int id;
	float mark;
};

void Display(char*,int,float);
int  StrName(int*,struct student *);


int main(void)
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int id_enter;
	struct student std[8]={{"haha",1577640,97.78},
	{"Mohamed",1577639,95.98},
	{"Ahmed",1577638,78.34},
	{"Elsayed",1577637,87.22},
	{"khalid",1577636,94.56},
	{"Ramdi",1577635,91.86},
	{"yehia",1577634,93.78},
	{"Mahmoud",1577633,85.18}};
	printf("Enter Your Id Please :");
	scanf("%d",&id_enter);
	int index=StrName(&id_enter,&std[0]);
	Display(std[index].name,std[index].id,std[index].mark);
	return 0;
}

int StrName(int *iid,struct student *std_ptr)
{
	int i=0;
	while(std_ptr[i].id != (*iid))
	{

		i++;
	}
	return i;
}

void Display(char *name,int id,float mark)
{
	printf("name\t\t id\t\t\t  mark\n");
	int i=0;
	while(name[i] != '\0')
	{
		printf("%c",name[i]);
		i++;
	}
	printf("\t%d\t\t%.2f",id,mark);
	return;
}
