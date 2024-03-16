#include<stdio.h>
#include<conio.h>
int chnage(int x) { // 001 -> num , x
	printf("\n%d", x);
	x--;
	if (x >= 0) {
		chnage(x);
	}
	//else {
		return x;
	//}
	//return 100;
	// 2
}
void main() {
	clrscr();
	int num = 10; // 001 -> num
	int a = chnage(num); // 001
	printf("\n final = %d", a);
	getch();
}