//program by sneha shee
#include<stdio.h>
#include<conio.h>
void f1(void);
void f2();
int x=20;
void main()
{
	clrscr();
	printf("%d",x);
	f1();
	f2();
	printf("\n%d",x);
	getch();

}
void f1()
{
	x++;
	printf("\n%d",x);
}
void f2()
{
	x=x+4;
}