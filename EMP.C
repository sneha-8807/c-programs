//program by sneha shee
//employee's record
#include<stdio.h>
#include<conio.h>
#include<time.h>
struct employee
{
	char name[20], post[20];
	int id;
	int sal;
};
void main()
{
	struct employee e[15];
	int i, n;
	time_t deviceTime;
	time(&deviceTime);
	clrscr();
	printf("Enter the number of employees:> ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the record of employee %d\n", i+1);
		printf("Enter employee's name:> ");
		scanf("%s",e[i].name);
		printf("Enter employee's ID:> ");
		scanf("%d",&e[i].id);
		printf("Enter employe's post:> ");
		scanf("%s",e[i].post);
		printf("Enter employee's salary:> ");
		scanf("%d",&e[i].sal);
		printf("Current time is %s",ctime(&deviceTime));
	}
	getch();
}