//programme by:> Sneha Shee
//Date:> 21.09.2023
//programme to print right angle star pattern
#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, k, n;
	clrscr();
	printf("Enter the number of star pattern:> ");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		for(k=0; k!=i; k++)
		{
			printf(" ");
		}
		for(j=0; j<n-i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}