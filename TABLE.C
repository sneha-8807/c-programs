//Programme by: Sneha Shee
//Date: 26.06.2023
//programme to print table of inputed number
void main()
{
	int i=1, n;
	clrscr();
	printf("Enter your number:> ");
	scanf("%d", &n);
       //	while(i<=10)
       for(i=1;i<=10;i++)
	{
		printf("%d x %d = %d\n", n, i, n*i);
		//i++;
	}

	getch();
}