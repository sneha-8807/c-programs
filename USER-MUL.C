//Programme by: Sneha shee
//Date: 14.08.2023
//Programme to multiply two number from user input
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
	printf("Multiply of %d * %d = %d", num1, num2, num1*num2);
	getch();
}