//Programme by: Sneha shee
//Date: 12.09.2023
//Programme to print star pattern of user inputed number
#include<stdio.h>
#include<conio.h>
void main()
{
	int n, i, j;
	clrscr();
	printf("Enter the number of pattern:> ");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		for(j=0; j<i+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}