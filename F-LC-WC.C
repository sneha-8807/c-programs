//program by sneha shee
#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	int i,lc=1,wc=1;
	char ch;
	clrscr();
	fp=fopen("file1.txt","r");
	if(fp==NULL)
	{
		printf("Not Open");
		getch();
		exit(1);
	}
	while(1)
	{
		ch=fgetc(fp);
		if(ch=='\n')
		{
			lc++;
		}
		if(ch==EOF)
		{
			break;
		}
		if(ch==' '||ch=='\n')
		{
			wc++;
		}
	}
	printf("\nthe number of line of this file: %d\n",lc);
	printf("The number of words of this file: %d",wc);
	getch();
}