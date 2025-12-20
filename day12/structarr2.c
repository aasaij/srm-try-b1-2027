#include <stdio.h>
#include <string.h>
//structure definition
struct employee{
    int id; // 4    
    char name[30]; // 30
    double salary; // 4
};
int main(){
	int n;
	scanf("%d", &n);
    //structure variable declaration
    struct employee emp[n];
    for (int i = 0; i<n; i++)
    	scanf("%d %s %lf", &emp[i].id, emp[i].name, &emp[i].salary);

	for (int i = 0; i<n; i++)    	
    	printf("%5d %-20s %10.2lf\n", emp[i].id, emp[i].name, emp[i].salary);

    return 00;
}