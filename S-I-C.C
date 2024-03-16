//programme by: Sneha Shee
//Date: 02.10.2023
//programme to separate individual characters from a string
#include<stdio.h>
#include<conio.h>
void main()
{
	char testData[15];
	int i;
	clrscr();
	printf("Enter your string:> ");
	scanf("%[^\n]s", testData);
	//printf("%d\n", sizeof(testData));
	for(i=0; i< sizeof(testData); i++)
	{
		//printf("testData[%d] = %d \n", i, testData[i]);
		//if(isalpha(testData[i]) || testData[i]==' ')
		//printf("%c ", testData[i]);
		if(testData[i] == '\0')
		{
			//printf("%c ", testData[i]);
			break;
		}
		printf("%c ", testData[i]);

	}
	getch();

}


