#include<stdio.h>
#include<conio.h>
int oddeven(int x);
void main()
{
	int n;
	clrscr();
	printf("enter a number: ");
	scanf("%d", &n);
       //	oddeven(n);
       //	printf("oddeven: %d", )
       if(oddeven(n)) 	// 1 = true, 0 = false
       {
		printf("Even");
       }
       else
       {
		printf("Odd");
       }
	getch();

}
int oddeven(int x)
{
	int a=1, b=0;

	if(x%2==0)
	{
	    return a; 	// 1 = T
	}
	else
	{
	    return b;	// 0 = F
	}
}