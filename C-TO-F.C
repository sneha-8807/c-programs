//program by sneha shee
//convert celsius to fahrenheit
#include<stdio.h>
#include<conio.h>
struct tempareture
{
	float celsius;
};
void main()
{ 	struct tempareture c;
	float f;
	clrscr();
	printf("Enter tempareture in celsius:> ");
	scanf("%f",&c.celsius);
	f=(9*c.celsius+160)/5;
	printf("The tempareture in fahrenheit is %f",f);
	getch();
}