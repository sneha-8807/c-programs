//Programme by: Sneha Shee
//Date: 26.08.2023
//Programme to find user inputed odd numbers by while loop
void main()
{
	int i=1, n, odd=0;
	clrscr();
	printf("Enter the ending number:> ");
	scanf("%d", &n);
	printf("\nOdd numbers:\n");
	while(i<=n)
	{
		if(i%2==1)
		{
			printf("%d\n",i);
			odd++;

		}
		i++;

	}
	getch();
}