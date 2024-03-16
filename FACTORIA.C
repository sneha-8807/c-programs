#include<stdio.h>
#include<conio.h>
void fact(int x);
void main()
{
	int n;
	clrscr();
	printf("enter a number: ");
	scanf("%d", &n);
	fact(n);
}
void fact(int x)
{
	int i, f=1;
	for(i=1; i<=x; i++)
	{
		f=f*i;
	}
	printf("The factorial of this number is %d", f);
	getch();
}