//Program to demonstrate functions
#include <stdio.h>

int main(){
    //function declaration or function proto-type
//    void greet();
	void greet(char[], char);
	char name[100];
	char gender;
	int x;
	scanf("%s\n", name);
	scanf("%c", &gender);
//	scanf("%d", &x);
//	scanf("%c", &gender);
	//function calling
	greet(name, gender);
	return 0;
}

void greet(char user[], char gender){	
	printf("Good Morning %s%s!", gender=='M' || gender=='m'?"Mr. " : "Ms. ", user);
	return;
}