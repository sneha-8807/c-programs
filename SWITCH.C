//Programme by: Sneha Shee
//Date: 17.08.2023
//programme to make a calculator with switch...case

#include<stdio.h>
#include<conio.h>
void main()
{
	int num1, num2, option, result;
	clrscr();
	printf(" 1 for addition\n 2 for subtraction\n 3 for multiplication\n 4 for division\n");
	printf("Enter option:> ");
	scanf("%d", &option);
	/*printf("Enter first number:> ");
	scanf("%d",&num1);
	printf("Enter second number:> ");
	scanf("%d",&num2);*/

	if (option > 4){
		printf("Invalid option selected");
		//printf("  %d\n ");
	}
	else {
		printf("First no.:> ");
		scanf("%d", &num1);
		printf("Enter second number:> ");
		scanf("%d",&num2);
		switch(option)
		{
			case 1:
				result = num1+num2;
				//printf("The result of addition is:> %d", result);
				printf("  %d\n +%d\n-----\n%d", num1, num2, result);
		break;
		case 2:
			result = num1-num2;
			printf("The result of subtraction is:> %d",result);
		break;
		case 3:
			result = num1*num2;
			printf("The result of multiplication is:> %d",result);
		break;
		case 4:
			if(num2==0)
			{
				printf("Cannot divide by 0");
			}
			else
			{
				result = num1/num2;
				printf("The result of division is:> %d", result);
			}
		break;

		default:
			printf("Invalid option selected");

	}
	}
	getch();

}