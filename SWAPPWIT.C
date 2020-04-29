#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("enter a");
	scanf("%d",&a);
	printf("enter b");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n after swapping a is %d ",a);
	printf("\n after swapping b is %d ",b);
	getch();
}
