#include<stdio.h>
#include<conio.h>
void oddeven(void);
void negative(void);
int n;
void main()
{
	clrscr();
	printf("enter any no ");
	scanf("%d",&n);
	oddeven();
	negative();
	getch();
}
void oddeven(void)
{
	if(n%2==0)
	{
		printf("\n no is even ");
	}
	else
	{
		printf("\n no is odd ");
	}
}
void negative(void)
{
	if(n<0)
	{
		printf("\n no is negative" );
	}
	else
	{
		printf("\n no is positive ");
	}
}

