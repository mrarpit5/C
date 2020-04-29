//check no is positive negative or zero
#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();
	printf("\n enter n ");
	scanf("%d",&n);
	if(n>0)
	{
		printf("\n no is positive ");
	}
	else if(n<0)
	{
		printf("\n no is negative ");
	}
	else
	{
		printf("\n no is zero ");
	}
	getch();
}
