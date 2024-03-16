//program by sneha shee
//find the average of n element in an array using dynamic allocation.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	float *a,n,avg,sum=0;
	int i;
	clrscr();
	printf("Enter the range of number: ");
	scanf("%f", &n);
	a=(float*)malloc(sizeof(float)*n);
	printf("Enter the number one by one:\n ");
	for(i=0;i<n;i++)
	{
		scanf("%f",a+i);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+ *(a+i);
	}
	avg=sum/n;
	printf("%.2f is average.",avg);
	getch();
}