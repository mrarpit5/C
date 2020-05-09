//print 1,5 and 10 value from array
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
	printf("\n 1 element is %d",a[0]);
	printf("\n 5 element is %d",a[4]);
	printf("\n 10 element is %d",a[9]);
	getch();

}
