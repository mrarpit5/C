#include<stdio.h>
#include<conio.h>
void main()
{
	int r,n,temp,n1=0;
	clrscr();
	printf("\n enter no");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		n1=(n1*10)+r;
		printf("\n %d",r);
		n=n/10;
	}
	printf("\n  %d ",n1);

	getch();
}
