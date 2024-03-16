//Programme by: Sneha Shee
//Date: 08.09.2023
//Programme to print the following star patterns of 'n' number
#include<stdio.h>
#include<conio.h>
void main()
{
	int n, i, j;
	clrscr();
	printf("Enter alength of pattern:> ");
	scanf("%d", &n);
	for (i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("* ");

		}
		printf("\n");
	}
	getch();
}