//programme by; Sneha Shee
//Date: 28.09.2023
//programme to print half piramid of numbers
#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, n;
	clrscr();
	printf("Enter the number of rows:> ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ", j);
		}
		printf("\n");
	}
	getch();
}