//Programme by : Sneha Shee
//Date: 13.09.2023
//programme to print star pattern
#include<stdio.h>
#include<Conio.h>
void main()
{
	int n,i,j,k;
	clrscr();
	printf("Enter the number of star pattern:>");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			printf(" ");
		}
		for(k=0;k<=i*2;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}