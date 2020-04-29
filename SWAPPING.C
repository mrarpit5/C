#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,temp;
	clrscr();
	printf("enter a");
	scanf("%d",&a);
	printf("enter b");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("\n after swapping a is %d ",a);
	printf("\n after swapping b is %d ",b);
	getch();
}
