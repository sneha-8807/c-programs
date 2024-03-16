//program by sneha shee
//program of sructure using function
#include<stdio.h>
#include<conio.h>
struct example
{
	int a;
};
struct test
{
	int b;
};
void sum(struct example,struct test);
void main()
{

	struct example oe;
	struct test ot;
	clrscr();
	printf("Enter first number:> ");
	scanf("%d",&oe.a);
	printf("Enter second number:> ");
	scanf("%d",&ot.b);
	sum(oe,ot);
	getch();
}
void sum(struct example oe,struct test ot)
{
	int result;
	result=oe.a + ot.b;
	printf("Sum is %d",result);
}