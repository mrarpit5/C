#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a[10];
	clrscr();
	for(i=0;i<10;i++)
	{
		printf("enter array elements %d ",i);
		scanf("%d",&a[i]);
	}
	printf("array elements are");
	for(i=0;i<10;i++)
	{
		printf("\n %d",a[i]);
	}
	getch();

}
