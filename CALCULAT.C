//Programme by: Sneha Shee
//Date: 16.08.2023
//Programme to make a calculator in turbo c
void main()
{
	int num1, num2, opption, result;
	clrscr();
	printf("1 for Addition\n2 for subtraction\n3 for multiplication\n4 for division\n");
	printf("Enter option:> ");
	scanf("%d", &oppxtion);
	printf("\nEnter first no.:> ");
	scanf("%d",&num1);
	printf("Enter second no.:> ");
	scanf("%d", &num2);

	if(opption==1)
	{
		result=num1+num2;
		printf("The result of addition is:> %d", result);
	}
	else if(opption==2)
	{
		result=num1-num2;
		printf("The result of subtraction is:> %d",result);
	}
	else if(opption==3)
	{
		result=num1*num2;
		printf("The result of multiplication is:> %d",result);
	}
	else if(opption==4)
	{
		if(num2==0)   // 2 0 -> num2=0
		{
			printf("Cannot divide by 0");
		}
		else
		{
			result = num1/num2;
			printf("The result of divition is:> %d", result);
		}

	}
	getch();
}