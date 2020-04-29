#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,s=1;
	clrscr();
	printf("\n enter no");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=s*i;
	}
	printf("\n factorial is  %d ",s);

	getch();
}
