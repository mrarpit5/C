//if you enter 1 then addition otherwise subtraction of
#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();
	printf("\n enter n ");
	scanf("%d",&n);
	if(n==1)
	{
		int n1,n2;
		printf("\n enter n1 ");
		scanf("%d",&n1);
		printf("\n enter n2 ");
		scanf("%d",&n2);
		int c=n1+n2;
		printf("\n addtion is %d ",c);
	}
	else
	{
		int n1,n2;
		printf("\n enter n1 ");
		scanf("%d",&n1);
		printf("\n enter n2 ");
		scanf("%d",&n2);
		int c=n1-n2;
		printf("\n subtraction is %d ",c);

	}
	getch();
}
