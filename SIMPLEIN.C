#include<stdio.h>
#include<conio.h>
void main()
{
	int p,r,n,si;
	clrscr();
	printf("enter p");
	scanf("%d",&p);
	printf("enter r");
	scanf("%d",&r);
	printf("enter n");
	scanf("%d",&n);
	si=p*r*n/100;
	printf("simple interest is %d ",si);
	getch();
}
