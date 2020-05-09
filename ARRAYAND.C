#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,s=0;
	int *p;
	clrscr();
	printf("\n enter array elements");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	p=&a[0];
	for(i=0;i<5;i++)
	{
		s=s+*p;
		p++;
	}
	printf("\n sum is %d ",s);
	getch();

}
