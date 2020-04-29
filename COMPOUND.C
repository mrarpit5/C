#include<stdio.h>
#include<conio.h>
void main()
{
	int p,r,n;
	float ci;
	clrscr();
	printf("\n enter value of p");
	scanf("%d",&p);
	printf("\n enter value of r");
	scanf("%d",&r);
	printf("\n enter value of n");
	scanf("%d",&n);
	ci=p*(1+r/100)^n;
	printf("\n compound interest is %f ",ci);
	getch();
}
