//50rupees=1dollar
#include<stdio.h>
#include<conio.h>
void main()
{
	int dollar,rupees;
	clrscr();
	printf("\n enter rupees");
	scanf("%d",&rupees);
	dollar=rupees/50;
	printf("\n dollar is %d ",dollar);
	getch();
}
