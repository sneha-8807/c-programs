//program by sneha shee
//program to print the maximum marks of multiple student
#include<stdio.h>
#include<conio.h>
struct student
{
	int roll;
	char name[40];
	int marks;
	int level;
};
void main ()
{
	struct student s[30];
	int n,i,max,loc;
	clrscr();
	printf("Enter the number of students: ");
	scanf("%d", &n);
	printf("Enter the roll, name, level and marks for students:\n ");
	for(i=0;i<n;i++)
	{
		printf("Enter the record for students %d\n", i+1) ;
		printf("Enter roll no:" );
		scanf("%d", &s[i].roll);
		printf("Enter name: ");
		scanf("%s",s[i].name);
		printf("Enter level: ");
		scanf("%d",&s[i].level);
		printf("Enter total marks: ");
		scanf("%d",&s[i].marks);

	}
	max=s[0].marks;
	loc=0;
	for(i=1;i<n;i++)
	{
		if(s[i].marks>max)
		{
		    max=s[i].marks;
		    loc=i;
		}
	}
	printf("%s and roll no %d is first", s[loc].name, s[loc].roll);
	getch();
}