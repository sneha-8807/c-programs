//Programme by: Sneha Shee
//Date: 14.09.2023
//programme to print star pattern of user inputed number
#include<stdio.h>
#include<conio.h>
void main()
{
      int n, i, j, k;
      clrscr();
      printf("Enter the number of star pattern:> ");
      scanf("%d",&n);
      for(i=0; i<n; i++)
      {
		for(k=0; k!=i ;k++)
		{
			printf("  ");
		}
		for(j=0; j<(n*2-(i*2+1)); j++)
		{
			printf("* ");
		}
		printf("\n");
      }
      getch();
}