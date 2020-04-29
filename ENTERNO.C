//if you enter more then 10 then perform -10 otherwise +10
#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();
	printf("\n enter n ");
	scanf("%d",&n);
	if(n>10)
	{
		int c;
		c=n-10;
		printf("\n no is %d ",c);
	}
	else if(n<10)
	{
		int c;
		c=n+10;
		printf("\n no is %d ",c);
	}
	else
	{
		printf("\n enter valid no ");
	}
	getch();
}
