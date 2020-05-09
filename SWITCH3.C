//enter your choice 1=1-10 2=11-20 3=21-30
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	clrscr();
	printf("enter your choice ");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
		for(i=1;i<=10;i++)
		{
			printf("%d",i);
		}
		break;
		case 2:
		for(i=11;i<=20;i++)
		{
			printf("%d",i);
		}
		break;
		case 3:
		for(i=21;i<=30;i++)
		{
			printf("%d",i);
		}
		break;
		defult:
		printf("invalid");
	}
	getch();
}