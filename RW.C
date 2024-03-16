//program by Sneha shee
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	FILE *t1,*t2;
	char s[50];
	char buffer[200];
	chdir("D:\\");
	clrscr();
	if(getcwd(buffer, sizeof(buffer))!=NULL)
	{
		printf("%s",buffer);
	}
	t1=fopen("file1.txt","r");
	t2=fopen("file2.txt","w");
	if(t1==NULL)
	{
		puts("cannot open");
		getch();
		exit(1);
	}
	while(fgets(s,50,t1)!=NULL)
	{
		fprintf(t2,"%s",s);
		puts("");
	}
	fclose(t1);
	fclose(t2);
	getch();
}