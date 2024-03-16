#include<stdio.h>
#include<conio.h>

// Declaration
int sum(int num1, int mun2);

void main(){
	int res = 0;
	clrscr();
	// Main function body
//	res = sum(10, 20);  // function call
	//printf("Sum1:> %d", res);
	printf("\nSum:> %d", sum( sum(5,6), sum(10,10) ) );
	getch();
}

// func Body
int sum(int num1, int num2){
	// Variable Declaration
	int ans = 0;

	// Defination
	ans = num1 + num2;

	// return
	return ans;
}





