/*
   Programme by: Sneha shee
   Date: 15.10.2023
   programme to find the revers of given number
   Input: 123
   Outpup: 321
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n, rev=0, rem;
	clrscr();
	printf("Enter a number:> ");
	scanf("%d", &n);
	do
	{
		rem = n%10;
		rev = rev * 10 + rem;
		n = n / 10;

	}while(n != 0);
	printf("%d", rev);
       getch();
}