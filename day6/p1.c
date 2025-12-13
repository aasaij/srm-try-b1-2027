//Program to find day of the date
#include <stdio.h>
#include <stdbool.h>
int main(){
	int dd, mm, yy;
	bool valid = true;
	scanf("%d/%d/%d", &dd, &mm, &yy); // 13/12/2025
	//date validation
	if (dd > 31 || dd < 1 || mm > 12 || mm < 1 || yy < 1900)
		valid = false;
	else{
		switch(mm){
			case 4: case 6: case 9: case 11:
				if (dd > 30) valid = false;
				break;
			case 2:
				if (yy % 400 == 0 ||(yy %4 ==0 && yy%100 != 0 ) ){
					if (dd > 29) valid = false;
				}
				else if (dd > 28) valid = false;
		}
	}
	printf("%s", valid?"Valid":"Invalid");
	
	return 0;
}