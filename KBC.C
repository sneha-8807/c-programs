// KBC........................................
#include<stdio.h>
#include<conio.h>
//#include<tanuj.h>
void main()
{
	int i,n;
	char ch;
	textcolor(1);
	clrscr();
	printf("\n  .....:::::Welcome to Festino:::::...");
	getch();
	clrscr();
	printf("\n ....::::Lets Start the Quiz Game::::....");
	getch();
	clrscr();
	for(i=15;i>=0;i--)
	{
		printf("\n Q1.What is the Capital of India ?");
		printf("\n A.Gujarat\tB.Bengal\n C.Delhi\tD.Mumbai");
		printf("\n Enter your choice :");
		printf("\n \t\t\t\t\t\ttime Left:........%d",i);
		if(kbhit())
		{
			ch=getch();
			if(ch=='C'||ch=='c')
			{
				printf("\nAns=%c",ch-32);
				printf("\nRight Ans");
				sleep(1);
				goto q2;
			}
			if(ch!='C'||ch!='c')
			{
				printf("\n Wrong Ans");
				sleep(1);
				exit(0);
			}
		}
		sleep(1);
		clrscr();
	}

	getch();
//************************ 1 END ***************************************



//*************************** 2 start *************************************
	q2:
	clrscr();
	for(i=15;i>=0;i--)
	{
		printf("\n Q2.Who is the director of Shivaay ?");
		printf("\n A. S S rajamouli\tB. SanjayLeela Bansali\n C. A.R. Rahman\t\tD. Ajay Devgen");
		printf("\n Enter your choice :");
		printf("\n \t\t\t\t\t\ttime Left: %d",i);
		if(kbhit())
		{
			ch=getch();
			if(ch=='D'||ch=='d')
			{
				printf("\n Ans=%c",ch);
				printf("\n Right Ans");
				sleep(1);
				goto q3;
			}
			if(ch!='D'||ch!='d')
			{
				printf("\n Wrong Ans");
				sleep(1);
				exit(0);
			}
		}
		sleep(1);
		clrscr();
	}

	getch();
	clrscr();
//*************************** 2 END *************************************



//****************************** 3 start **************************************
	q3:
	clrscr();
	for(i=15;i>=0;i--)
	{
		printf("\n Q3. Who is the CM of Gujarat ?");
		printf("\n A. AnandiBen Patel\tB. Jivraj narayan Mehta\n C. Hitendra Desai\tD. Nitin Patal");
		printf("\n Enter your choice :");
		printf("\n \t\t\t\t\t\ttime Left: %d",i);
		if(kbhit())
		{
			ch=getch();
			if(ch=='D'||ch=='d')
			{
				printf("\n Ans=%c",ch);
				printf("\n Right Ans");
				sleep(1);
				goto q4;
			}
			if(ch!='D'||ch!='d')
			{
				printf("\n Wrong Ans");
				sleep(1);
				exit(0);
			}
		}
		sleep(1);
		clrscr();
	}

	getch();
	clrscr();
//****************************** 3 END **************************************



//***************************** 4 start **************************************
	q4:
	clrscr();
	for(i=15;i>=0;i--)
	{
		printf("\n Q4. Twenty Per. of World Oxygen is supplied from which forest ?");
		printf("\n A. Dvaita forest\tB. Amazon Rain forest\n C. Madhu Forest\tD. Congo rain Forest");
		printf("\n Enter your choice :");
		printf("\n \t\t\t\t\t\ttime Left: %d",i);
		if(kbhit())
		{
			ch=getch();
			if(ch=='B'||ch=='b')
			{
				printf("\n Ans=%c",ch);
				printf("\n Right Ans");
				sleep(1);
				goto q5;
			}
			if(ch!='B'||ch!='b')
			{
				printf("\n Wrong Ans");
				sleep(1);
				exit(0);
			}
		}
		sleep(1);
		clrscr();
	}

	getch();
	clrscr();
//***************************** 4 END ****************************************

//***************************** 5 Start ****************************************

	q5:
	clrscr();
	for(i=15;i>=0;i--)
	{
		printf("\n Q5. Choti abcd badi ABCD se choti hai k badi?????");
		printf("\n A.Choti\tB.Badi");
		printf("\n Enter your Ans :");
		printf("\n \t\t\t\t\t\ttime Left: %d",i);
		if(kbhit())
		{
			ch=getch();
			if(ch=='B'||ch=='b')
			{
				printf("\n Ans=%c",ch);
				sleep(1);
				break;
			}
			if(ch!='B'||ch!='b')
			{
				printf("\n Wrong Ans");
				sleep(1);
				exit(0);
			}
		}
		sleep(1);
		clrscr();
	}
	printf("\n Right Ans");
	sleep(1);
	clrscr();
	printf("\t\t\t Credit Goes\n\t\t\t      to\n\t\t\tTanuj & Pragnesh");
	sleep(3);
}
