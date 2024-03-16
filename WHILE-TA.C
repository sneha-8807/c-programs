//Programme by: Sneha Shee
//Date: 26.08.2023
//programme to print table user inputed number
#include<stdio.h>
#include<conio.h>
void main()
{
	int i=0 , num;
	clrscr();
	printf("Enter your number:> ");
	scanf("%d", &num);
	while(i<=num)
	{
		printf("%d\n", i);
		i++;
	}
	getch();
}