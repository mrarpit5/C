//check character is vowel or not
#include<stdio.h>
#include<conio.h>
void main()
{
	char c;
	clrscr();
	printf("enter your choice [small character only]");
	scanf("%c",&c);
	switch(c)
	{
		case a:
		printf("the character is vowel");
		break;
		case e:
		printf("the character is vowel");
		break;
		case i:
		printf("the character is vowel");
		break;
		case o:
		printf("the character is vowel");
		break;
		case u:
		printf("the character is vowel");
		break;
		defult:
		printf("the character is not vowel");
	}
	getch();
}