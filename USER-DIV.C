//Programme by: Sneha Shee
//Date: 14.08.2023
//Programme to divide two numberfrom user input
#include<stdio.h>
#include<conio.h>
void main()
{
	int num1, num2;
	clrscr();
	printf("Enter a number:> ");
	scanf("%d", &num1);
	printf("Entered second number:> ");
	scanf("%d", &num2);
	if(num2 == 0)
	{
		printf("cannot divide by 0");
	}
	else
	{
		printf("divide of %d / %d = %d", num1, num2, num1/num2);
	}
	getch();
}


