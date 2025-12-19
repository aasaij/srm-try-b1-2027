//Program to demonstrate functions
#include <stdio.h>

int main(){
    //function declaration or function proto-type
//    void greet();
	void greet(char[]);
	//function calling
	greet("Jithesh");
	return 0;
}
//Function definition
// void greet(){
// 	printf("Good Morning Engineer!");
// 	return;
// }

void greet(char user[]){
	printf("Good Morning %s!", user);
	return;
}