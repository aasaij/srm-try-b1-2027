#include <stdio.h>
int main() {
    char name[30] = "Dharshini";
    char *name1 = "Sivasri";
//    name[10] ='G';
//    name[11] = 'o';
//    name[12] = 'o';
//    name[13] = 'd'; 
//    name[9] = ' ';
//    printf("%s", name);
    // printf("%s", name+10);
//    printf("%s", &name[2]);
//	printf("%s", name+4);
//	printf("%c", *name);
//	printf("%c", *name+3);
//	printf("%c", *(name+3));
//	printf("%c", *name++);
	name[0] = 'M';
	printf("%s", name);
	name1[0] = 'N';
	printf("%s", name1);
  return 0;
}