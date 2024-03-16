//Programme by: Sneha Shee
//Date: 26.08.2023
//programme to find user inputed even number by while loop
#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1, n, even=0;
	clrscr();
	printf("Enter the ending number:> ");
	scanf("%d", &n);
	printf("\nEven numbers:\n");
	while(i<=n)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
			even++;
		}
		i++;
	}
	getch();
}