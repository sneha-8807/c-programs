//Programme by: Sneha Shee
//Date: 10.08.2023
//Programme to find greater number
#include<stdio.h>
#include<conio.h>

void main()
{
	int num1=60, num2=40;
	clrscr();
	if(num1 > num2)
	{
		printf("%d is greater than %d", num1, num2);
	}
	else if (num1 == num2)
	{
		printf("%d is equal to %d", num1, num2);
	}
	else
	{
		printf("%d is greater than %d", num2, num1);
	}
	getch();
}