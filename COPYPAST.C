//program by sneha shee
//copy paste program
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	FILE *fp1,*fp2;
	char a[50];
	clrscr();
	fp1=fopen("file1.txt","r");
	if(fp1==NULL)
	{
		printf("Cannot Open");
		getch();
		exit(1);
	}
	fp2=fopen("file3.txt","a");
	while(fgets(a,50,fp1)!=NULL)
	{
		fprintf(fp2,"%s",a);
	}
	getch();

}