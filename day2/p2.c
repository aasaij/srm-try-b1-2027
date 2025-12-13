//>
//>=
//<
//<=
//==
//!=
//Logical 
//&&		AND
//||		or
//!			NOT
//Increment && decrement
//++/--
//a++ ==> a = a + 1
//Ternary or conditional
?:
	Syntax:
			<exprL>?<true>:<false>;
	example
			printf("%d", x > y ? x : y)			;
//bitwise
	& --> AND
		X = 10
		Y = 20
		Z = X & Y
			X	==> 01010
			Y	==> 10100
					======
					00000
					======
	| --> OR
			X = 10
		Y = 20
		Z = X | Y
			X	==> 01010
			Y	==> 10100
					======
					11110
					======
	^ --> XOR
		X = 11
		Y = 13
		Z = X ^ Y
			X	==> 1011
			Y	==> 1101
					======
					0110
					======
	
	~ -- NOT , NEGATION, 1'S COMPLMENT
	>> --> RIGHT SHIFT
		
	<< --> LEFT SHIFT
		x = 10
		y = x << 3
		
	>>> (java) --> RIGHT SHIFT WITH ZERO FILL
	

				
#include <stdio.h>
int main(){
//	printf("%d", 100 > 20);
	float x = 10.5, y = 0;
//	printf("%d", x&& y);
//	printf("%d", x || y);
//	printf("%d", !x);
//	printf("%d", !y);
{	
	int x, y, z;
	x = 7;
	y = x++; //  y = x ; x = x + 1;
	z = --x + ++y; // y = y + 1; z = x + y ; x = x + 1
	printf("%d %d %d", x, y, z);
}
	return 0;
}
//x   y   z
//10  11  22
//10  11  1011
//12  12   22
//12  11   23
//  7    9    16
//  7    8    15
//  7    7    15
//  6    8    14