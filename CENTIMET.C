#include<stdio.h>
#include<conio.h>
void main()
{
	int meter,centimeter;
	clrscr();
	printf("\n enter centimeter");
	scanf("%d",&centimeter);
	meter=centimeter/100;
	printf("\n meter is %d ",meter);
	getch();
}
