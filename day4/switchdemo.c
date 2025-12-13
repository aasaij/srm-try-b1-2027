//Program to implement simple calculator using switch statement
#include <stdio.h>

int main(){
	float day, x = 5;
	scanf("%d", &day);
	switch(day){
		printf("Welcome to switch statement");
		day = 7;
		case 10-9:			
			printf("It's Monday. Concentrate on studies!\n"); break;
		case 2 ...4:
			printf("Still It's week day only\n"); break;			
		case 5:
			printf("It's Friday. Get ready for week-end!");
		case 6: case 7:
			printf("Enjoy your week-end!");
		default:
			printf("Invalid day number!");
	}
	return 0;
}
