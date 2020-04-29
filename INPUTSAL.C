//if salary is more then 5000 then the bouns is 1000 otherwise bouns is 200. at last the salary+bouns are print
#include<stdio.h>
#include<conio.h>
void main()
{
	int s,b;
	clrscr();
	printf("\n enter salary ");
	scanf("%d",&s);
	if(s>5000)
	{
		b=1000;
		s=s+b;
		printf("\n bouns is %d ",b);
		printf("\n new salary is %d ",s);
	}
	else
	{
		b=200;
		s=s+b;
		printf("\n bouns is %d ",b);
		printf("\n new salary is %d ",s);
	}
	getch();
}
