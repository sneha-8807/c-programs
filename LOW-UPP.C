//programme by: Sneha Shee
//Date 11.10.2023
//programme to print user inputed string lowercase to uppercase
#include<stdio.h>
#include<conio.h>
void main()
{
	char str[15];
	int i;
	clrscr();
	printf("Enter a string:> ");
	scanf("%[^\n]s", str);
	for(i=0; i<strlen(str); i++)
	{
	      printf("%c", toupper(str[i]));
	}
	getch();
}