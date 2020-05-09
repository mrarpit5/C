//enter your choice 1=addition 2=subtraction 3=multiplication 4=division
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a,b,c=0;
	clrscr();
	printf("enter your choice ");
	scanf("%d",&n);
	printf("enter 1 number ");
	scanf("%d",&a);
	printf("enter 2 number ");
	scanf("%d",&b);
	switch(n)
	{
		case 1:
		c=a+b
		printf("addition is ",c);
		break;
		case 2:
		c=a-b
		printf("subtraction is ",c);
		break;
		case 3:
		c=a*b;
		printf("multiplication is ",c);
		break;
		case 4:
		c=a/b;
		printf("division is ",c);
		break;
		defult:
		printf("invalid");
	}
	getch();
