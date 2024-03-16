//program by sneha shee
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	char s[50];
	clrscr();
	fp=fopen("file1.txt","r");
	if(fp==NULL)
	{
		puts("Cannot Open");
		getch();
		exit(1);
	}
	while(fgets(s,50,fp)!=NULL)
	{
		fprintf(stdout,"%s",s);
	}
	fclose(fp);
	getch();
}