/*enter no
if no is 1to15  then  +
if no is 16to30 then  -
if no is 31to45 then  *
if no is 46to60 then  /
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c=0;
	clrscr();
	printf("\n enter a ");
	scanf("%d",&a);
	printf("\n enter b ");
	scanf("%d",&b);
	if(a>1 && a<15 && b>1 && b<15)
	{
		c=a+b;
		printf("\n + is %d ",c);
	}
	else if(a>16 && a<30 && b>16 && b<30)
	{
		c=a-b;
		printf("\n - is %d ",c);
	}
	else if(a>31 && a<45 && b>31 && b<45)
	{
		c=a*b;
		printf("\n * is %d ",c);
	}
	else if(a>46 && a<60 && b>46 && b<60)
	{
		c=a/b;
		printf("\n / is %d ",c);
	}
	else
	{
		printf("\n enter valid range");
	}
	getch();
}
