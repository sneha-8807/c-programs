//programme by: Sneha Shee
//Date: 28.09.2023
//programme to print half piramid of alphabets
#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, a;
	clrscr();
	printf("Enter the rows of alphabets:> ");
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		for(j=0; j<=i; j++)
		{
		printf("%c ", 65+i);
		}
		printf("\n");
	}
	getch();
}