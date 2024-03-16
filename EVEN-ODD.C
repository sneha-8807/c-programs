//Programme by: Sneha shee
//Date: 11.08.2023
//Programme to find the number is Even or Odd
#include<stdio.h>
#include<conio.h>

void main()
{
	int num = 2;
	clrscr();
	if(num%2 == 0)
	{
		printf("%d is even", num);
	}
	else
	{
		printf("%d is odd",num);
	}
	getch();
}