//Storage classes
//
//		auto, static, extern, register
//		
//		
//		
//		auto int a;

#include <stdio.h>

int main(){
	for (int i = 1; i<=10; i++){
		static int x=0;
		printf("%d", x++);
	}
	return 0;
}