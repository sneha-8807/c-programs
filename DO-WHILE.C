//Programme by: Sneha Shee
//Date: 28.08.2023
//programme to user inputed calculator by do while loop
#include<stdio.h>
#include<conio.h>
void main()
{
	int num1, num2, option;
	char toContinue;
	//clrscr();
	do
	{
	clrscr();
	printf("1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\n");
	printf("Enter first number:> ");
	scanf("%d", &num1);
	printf("Enter second numner:> ");
	scanf("%d",&num2);
	printf("Enter the option:> ");
	scanf("%d",&option);
	switch(option)
	{
		case 1:
			printf("  %d\n + %d\n------\n  %d", num1, num2, num1+num2);
		break;
		case 2:
			printf("  %d\n - %d\n------\n  %d", num1, num2, num1-num2);
		break;
		case 3:
			printf("  %d\n x %d\n------\n  %d", num1, num2, num1*num2);
		break;
		case 4:
			if(num2==0)
			  {
				printf("cannot devided by 0");
			  }
			else
			{
				printf("  %d\n / %d\n-----\n  %d",num1, num2, num1/num2);
			}
		break;
		default:
			printf("Invalid option selected");

	 }
	      printf("\nDo you want to continue ?(Y/N)");
	      scanf(" %c", &toContinue);

	}
	while(toContinue == 'y'||toContinue=='Y');
	//getch();

}