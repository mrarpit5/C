#include<stdio.h>
#include<conio.h>
void main()
{
	int r,n,s=0,q,temp;
	clrscr();
	printf("\n enter no");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		q=r*r*r;
		s=s+q;
		n=n/10;
	}
	if(temp==s)
	{
		printf("\n  armstrong ");
	}
	else
	{
		printf("\n not armstrong ");
	}

	getch();
}
