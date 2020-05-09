#include<stdio.h>
#include<conio.h>
void main()
{
	int x=10,y;
	int *ptr;
	ptr =&x;
	y=*ptr;
	clrscr();
	printf("\n value x %d ",x);
	printf("\n %d is stored at %u ",x,&x);
	printf("\n %d is stored at %u ",&x);
	printf("\n %d is stored at %u ",*ptr,&ptr);
	printf("\n %d id stored at %u ",ptr,&ptr);
	printf("\n %d is stored at %u ",y,&y);
	*ptr=25;
	printf("\n now x=%d ",x);
	getch();
}
