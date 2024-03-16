//Programme by: Sneha Shee
//Date: 25.09.2023
//programme to print user inputed name and good morning
#include<stdio.h>
#include<conio.h>
void main()
{
	char firstName[20];
	clrscr();
	printf("Enter your first name and press enter:> ");
	scanf("%s", firstName);
	printf("Good Morning %s\nHave a nice day", firstName);
	getch();
}