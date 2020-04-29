/*input marks
if 70% then distinction
if 60% then first clss
if 50% then second class
if 40% then pass otherwise fail
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int m1,m2,m3,m4,total;
	float per;
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
	per=total/4;
	printf("\n percentage is %f ",per);
	if(per>=70)
	{
		printf("\n DISTINCTION ");
	}
	else if(per>=60)
	{
		printf("\n FIRST CLASS ");
	}
	else if(per>=50)
	{
		printf("\n SECOND CLASS ");
	}
	else if(per>=40)
	{
		printf("PASS");
	}
	else
	{
		printf("FAIL");
	}
	getch();
}
