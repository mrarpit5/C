#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,flag,s=0;
	clrscr();
	printf("\n enter no");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			s=s+i;
		}
	}
	if(s==n)
	{
		printf("perfect");
	}
	else
	{
		printf("not perfect");
	}

	getch();
}
