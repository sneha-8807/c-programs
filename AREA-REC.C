//program by sneha shee
//program to calculate and display the area of a rectangle
#include<stdio.h>
#include<conio.h>
struct area
{
	int length,width;
};
void main()
{
	struct area l,w;
	int result;
	clrscr();
	printf("Enter the length of rectangle:> ");
	scanf("%d", &l.length);
	printf("Enter the width of rectangle:> ");
	scanf("%d",&w.width);
	result = l.length* w.width;
	printf("The area of this rectangle is %d",result);
	getch();
}