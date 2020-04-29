#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,r=0;
	clrscr();
	printf("\n enter no ");
	scanf("%d",&n);

	for(i=1;i<=10;i++)
	{
		printf("\n");
		printf("%d",n);
		printf("*");
		printf("%d",i);
		printf("=");
		r=n*i;
		printf("%d",r);
	}
	getch();
}
