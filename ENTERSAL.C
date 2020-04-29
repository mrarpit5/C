/*enter salary
if salary is 5000-10000 then the bouns is 1000
if salary is 10000-15000 then the bouns is 2000
if salary is 15000-20000 then the bouns is 2500
at last the salary+bouns are print
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int s,b;
	clrscr();
	printf("\n enter salary ");
	scanf("%d",&s);
	if(s>5000 && s<10000)
	{
		b=1000;
		s=s+b;
		printf("\n bouns is %d ",b);
		printf("\n new salary is %d ",s);
	}
	else if(s>10000 && s<15000)
	{
		b=2000;
		s=s+b;
		printf("\n bouns is %d ",b);
		printf("\n new salary is %d ",s);
	}
	else if(s>15000 && s<20000)
	{
		b=2500;
		s=s+b;
		printf("\n bouns is %d ",b);
		printf("\n new salary is %d ",s);
	}
	else
	{
		printf("\n enter valid salary");
	}
	getch();
}
