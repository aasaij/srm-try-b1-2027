//Program to demonstration enumerations

#include <stdio.h>

//enum boolean {false, true};
//enum boolean {true=1, false=0};
enum DAYS {Monday=1, Tuesday, Wednesday, Thrusday, Friday, Saturday, Sunday };
int main(){
//	enum boolean valid;
//	printf("%d", false);
//	int  day, x = 5;
	enum DAYS day;
	scanf("%d", &day);
	switch(day){
		case Monday:			
			printf("It's Monday. Concentrate on studies!\n"); break;
		case Tuesday ...Thrusday:
			printf("Still It's week day only\n"); break;			
		case Friday:
			printf("It's Friday. Get ready for week-end!");
		case Saturday: case Sunday:
			printf("Enjoy your week-end!");
		default:
			printf("Invalid day number!");
	}
	return 00;
}