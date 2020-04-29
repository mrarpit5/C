#include<stdio.h>
#include<conio.h>
void main()
{
	int y;
	clrscr();
	printf("\n enter year ");
	scanf("%d",&y);
	if(y%2==0)
	{
		printf("\n leap year ");
	}
	else
	{
		printf("\n not leap year ");
	}
	getch();
}
