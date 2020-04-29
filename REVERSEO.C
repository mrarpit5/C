#include<stdio.h>
#include<conio.h>
void main()
{
	int r,n;
	clrscr();
	printf("\n enter no");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		printf("\n %d",r);
		n=n/10;
	}
	printf("\n  %d ",r);

	getch();
}
