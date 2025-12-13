//Program to implement simple calculator using switch statement
#include <stdio.h>

int main(){
	int opr1, opr2;
	char sign;
	scanf("%d %c %d", &opr1 , &sign, &opr2);
	switch(sign){
		case '+':			
			printf("%d + %d = %d\n", opr1, opr2, opr1 + opr2 ); break;
		case '-':
			printf("%d - %d = %d\n", opr1, opr2, opr1 - opr2 ); break;			
		case '*': case 'x': case 'X':
			printf("%d x %d = %d\n", opr1, opr2, opr1 * opr2 ); break;			
		case '/':
			printf("%d / %d = %g\n", opr1, opr2, (float)opr1 / opr2 ); break;			
		case '%':
			printf("%d %% %d = %d\n", opr1, opr2, opr1 % opr2 ); break;			
		default:
			printf("Invalid operation!");			
	}
	return 0;
}
