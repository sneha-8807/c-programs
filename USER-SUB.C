//Programme by: Sneha Shee
//Date:14.08.2023
//Programme to subtract two number from user input
#include<stdio.h>
#include<conio.h>
void main()
{
	int num1, num2;
	clrscr();
	printf("Enter a number:> ");
	scanf("%d", &num1);
	printf("Enter second number:> ");
	scanf("%d", &num2);
	printf("sub of %d - %d = %d", num1, num2, num1-num2);
	getch();
}