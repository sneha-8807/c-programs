#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j,k,m,p,q, s;
	clrscr();
	printf("Enter a number: ");
	scanf("%d", &n);
	n = n < 3 ? 3 : n;	// handle if 0 or less is entered then set to 0
	n = n % 2 ? n : n+1;	// convert even number into odd
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-(i-1);j++)
		{
			printf(" ");
		}
		for(k=0;k<=i*2;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	m=n+1;
	for(i=1;i<m;i++)
	{
		for(j=0;j<m-i;j++)
		{
			printf(" ");
		}
		for(k=0;k<=i*2;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	p=n+1;
	for(i=1;i<=p;i++)
	{
		for(j=0;j<p-i;j++)
		{
			printf(" ");
		}
		for(k=0;k<=i*2;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	q = p-1;
	s = q <= 3 ? 0 : q/3;
	for(i=0;i<q+1;i++)
	{
		for(j=s;j<=q-1;j++)
		{
			printf(" ");
		}
		for(k=1;k<=q;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("...M A R R Y   C H R I S T M A S...");
	getch();
}