//programme by; Sneha Shee
//Date: 07.10.2023
//write a programme to print individual characters of a string in revers order
#include<stdio.h>
#include<conio.h>
void main()
{
	char testData[15];
	int i;
	clrscr();
	printf("Enter your string:> ");
	scanf("%[^\n]s", testData);
	//printf("%d", strlen(testData));
	//printf("%d", sizeof(testData));
	for(i=strlen(testData);i>=0 ;i--)
	{
		printf("%c ",testData[i]);
	}
	getch();
}