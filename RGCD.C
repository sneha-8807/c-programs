#include<stdio.h>
#include<conio.h>
int gcd (int x, int y);
void main()
{
	int n,m;
	clrscr();
	printf("Enter 1st number: ");
	scanf("%d",&n);
	printf("Enter 2nd number: ");
	scanf("%d", &m);
	printf("The gcd is %d",gcd(n,m));
	getch();
}
int gcd(int x, int y)
{
	if(y!=0)
	{
		return gcd(y,x%y);
	}
	else
	return x;
}