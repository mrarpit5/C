#include<stdio.h>
#include<conio.h>
void main()
{
	int m1,m2,m3,m4,total;
	float avg;
	clrscr();
	printf("\n enter m1");
	scanf("%d",&m1);
	printf("\n enter m2");
	scanf("%d",&m2);
	printf("\n enter m3");
	scanf("%d",&m3);
	printf("\n enter m4");
	scanf("%d",&m4);
	total=m1+m2+m3+m4;
	printf("total is %d ",total);
	avg=total/4;
	printf("\n percentage is %f ",avg);
	getch();
}
