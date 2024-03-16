#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int n,i;
	clrscr();
	printf("Enter a number:> ");
	scanf("%d",&n);
	for(i=n;i>=0;i--)
	{
	     fflush(stdout);
	     printf("Your time start now :> %2d\r",i);
	     sleep(1);

	}
	printf("\nFinish your time.");
	getch();
}