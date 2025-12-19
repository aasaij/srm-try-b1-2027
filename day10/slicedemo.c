#include <stdio.h>
#include <stdlib.h>
char* slice(char str[], int startIndex, int numChars){
	char *temp=NULL;
//	temp = (char *)malloc((numChars+1) * sizeof(char));
	temp = (char *)calloc(numChars+1, sizeof(char));
	if (temp != NULL){		
		for (int i = startIndex, j = 0;str[i] && i<startIndex+numChars; i++, j++ )
			temp[j] = str[i];
	}
	return temp;
}


int main(){
	printf("%s", slice("Srikaran", 3,-2)); // ran
	return 0;
}