#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,n3;
	clrscr();
	printf("\n enter 1 number ");
	scanf("%d",&n1);
	printf("\n enter 2 number ");
	scanf("%d",&n2);
	printf("\n enter 3 number ");
	scanf("%d",&n3);
	if(n1>n2 && n1>n3)
	{
		printf("\n n1 is big ");
	}
	else if(n2>n1 && n2>n3)
	{
		printf("\n n2 is big ");
	}
	else if(n3>n1 && n3>n2)
	{
		printf("\n n3 is big ");
	}
	else
	{
		printf("\n no is equal ");
	}
	getch();
}
