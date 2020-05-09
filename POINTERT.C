#include<stdio.h>
#include<conio.h>
struct s
{
	int i;
}*sp,s_item;
void main()
{
	s_item.i=10;
	sp=&s_item;
	sp->i+=20;
	clrscr();
	printf("\n %d ",sp->i);
	getch();
}