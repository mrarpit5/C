#include<stdio.h>
#include<conio.h>
struct emp
{
	char name[30];
	int age;
	float salary;
}e1;
void main()
{
	clrscr();
	printf("\n enter name of emp ");
	scanf("%s",&e1.name);
	printf("\n enter age of emp ");
	scanf("%s",&e1.age);
	printf("enter salary of emp ");
	scanf("%d",&e1.salary);
	printf("the details of emp");
	printf("\n name is %s ",e1.name);
	printf("\n age is %d ",e1.age);
	printf("\n salary is %f ",e1.salary);
	getch();
}