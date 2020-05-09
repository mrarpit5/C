#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	for(i=1;i<=10;i++)
	{
		if(i==3)
		{
			goto finish;
		}
		printf("%d",i);
	}
	finish:
	printf("\n programe completed");
	getch();
}