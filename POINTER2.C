#include<stdio.h>
#include<conio.h>
void main()
{
	char **ptr;
	char *p;
	char c='d';
	clrscr();
	p=&c;
	ptr=&p;
	printf("\n c=[%c]",c);
	printf("*p=[%c]",*p);
	printf("**ptr=[%c]",**ptr);
	getch();
}