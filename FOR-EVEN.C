//programme by: Sneha Shee
//Date: 26.08.2023
//programme to find user inputed even  number by using for loop
#include<stdio.h>
#include<conio.h>
void main()
{
	int i, n; //even=0;
	clrscr();
	printf("Enter the ending number:> ");
	scanf("%d", &n);
	for(i=0; i<=n; i++)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
			//even++;
		}

	}
	getch();


}
