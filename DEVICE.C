//programe by sneha shee
//print device current date and time
#include<stdio.h>
#include<conio.h>
#include<time.h>
void main()
{
	time_t deviceTime;
	clrscr();
	time(&deviceTime);
	printf("Current Date and time is %s",ctime(&deviceTime));
	getch();
}