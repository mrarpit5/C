#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,flag=0;
	clrscr();
	printf("\n enter no");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
		else
		{
			flag=0;
		}
	}
	if(flag==0)
	{
		printf("prime");
	}
	else
	{
		printf("not prime");
	}

	getch();
}
