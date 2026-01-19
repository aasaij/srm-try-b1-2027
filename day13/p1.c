#include <stdio.h>

int main(){
	//bit fields
	struct flag {
		int x:4;
		int y:3;
		int z:2;
	};
	struct flag f = {12, 11, 13};
	printf("%d %d %d", f.x, f.y, f.z);
//	printf("%d", sizeof(f));
	
	return 0;
}