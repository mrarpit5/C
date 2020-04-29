#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d;
	clrscr();
	printf("\n enter a");
	scanf("%d",&a);
	printf("\n enter b");
	scanf("%d",&b);
	printf("\n enter c");
	scanf("%d",&c);
	d=a;
	a=b;
	b=c;
	c=d;
	printf("\n after swapping a is %d ",a);
	printf("\n after swapping b is %d ",b);
	printf("\n after swapping c is %d ",c);
	getch();
}
