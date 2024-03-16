#include<stdio.h>
#include<conio.h>
void star(int x);
void main()
{
	int n;
	clrscr();
	printf("Enter a number: ");
	scanf("%d", &n);
	star(n);
}
void star(int x)
{
	int i, j;
	for(i=0; i<x; i++)
	{
		for(j=0; j<=i; j++)
		{
			printf(" *");
		}
		printf("\n");
	}
	getch();
}