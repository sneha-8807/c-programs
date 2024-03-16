//program by sneha shee
//Employee's record
#include<stdio.h>
#include<conio.h>
struct employee
{
	char name[50], post[50];
	int id;
	float sal;
	int s;
};
void main()
{
	struct employee e[40];
	int n, i;
	clrscr();
	printf("Enter the number of employee:");
	scanf("%d",&n);
	printf("Enter the employee's name, ID, post, salary:");
	for(i=0;i<n;i++)
	{
		printf("Enter the record for employee %d", i+1);
		printf("Enter employee's name:");
		scanf("%s",e[i].name);
		printf("%s",e[i].name );
		printf("Enter employee's ID:");
		scanf("%d",&e[i].id);
		printf("Enter employee's post:");
		scanf("%s",e[i].post);
		printf("Enter employee's salary:");
		scanf("%d", &e[i].s);

	}
	for(i=0; i<n; i++){
	printf("Name:> %s \n", e[i].name);
	printf("Id:> %d \n", e[i].id);
	printf("Post:> %s \n",e[i].post);
	printf("Sal :> %d",e[i].s);
	}

	getch();
}