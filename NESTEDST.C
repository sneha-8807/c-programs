//program by sneha shee
//nested structure
#include<stdio.h>
#include<conio.h>
struct example
{
	int a;
	struct test
	{
		int b;
	}ot;
}oe;
void main()
{
	int result;
	clrscr();
	printf("Enter 1st num:> ");
	scanf("%d",&oe.a);
	printf("Enter 2nd num:> ");
	scanf("%d",&oe.ot.b);
	result=oe.a+oe.ot.b;
	printf("Sum is %d",result);
	getch();
}