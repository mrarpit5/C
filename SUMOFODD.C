#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,es=0,os=0;
	clrscr();
	printf("\n enter no ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		if(n%2==0)
		{
			es=es+i;
		}
		else
		{
			os=os+i;
		}
	}
		printf("\n even no's sum is %d ",es);
		printf("\n odd no's sum is %d",os);

	getch();
}
