 #include <stdio.h>
 int main(){
// 	printf("%x", -1>>2);
	int x = 10;
	x *= 10 + 2; // x = x * 10 + 2
	printf("%d", x);
 	return 0;
 }
 
// Assignment operators
// 1. Simple
// 		=
// 			age = 21;
// 			
// 2. Shorthand or compound
// 		+=, -=, *=. /=, %=
// 		
// 			a = a + b  ==> a+=b
// 			x = x + 10 ==> x+=10
// 		
// 		&=, |=, ^=, >>=, <<=,   (>>>= --> Java)

Special 
	sizeof()
	, ; [], {}, () 
	
Keywords
data types
	int, char, float, double, void
	Modifiers
		signed, unsigned, long, short
	Qualifier
		const, volatile
		
		sizeof()
control structures
	if, else, switch, case, break, default
	for, while, do, continue, goto
UDD
	struct, union, typedef, enum
Storage classes
	static, auto, extern, register
Function
	return
	
	
Data types
	basic
		char, int, float, double, void
	derived
		arrays, pointers
	UDD
		structure, union

Standard
	32 bit compiler
	 				size		format 		Range
	char			1			%c			-128 to 127
	unsigned char   1			%c			0 to 255
	
	int 			4			%d %i		-2147483648 to 	2147483647
	unsigned int	4			%u			0 to 4294967295
	short int		2			%hd %hi     -32768 to 32767
	unsigned short int  2		%hu			0 to 65535
	long int 		4			%li or %ld	integer range
	unsigned long int  4		%lu			unsigned integer range
	long long int	8			%lli % lld	-2^63 to 2^63 - 1
	unsigned long long int 8	%llu		0 to 2%64 - 1
	
	
	int x ;
	
	Integer values can be represented in 4 ways
		decimal 		x = 10
		octal			x = 010
		hexadecimal		x = 0x10
		binary			x= 0b10
		
		float  --> 4 bytes		--> 32 bits --> 6 bits for decimal part
									26 bits for integer part
								single precision
				format : %f %g %e %E %G
		double --> 8 bytes		--> 64 bits --> 12 bits for decimal part
					double precision
				format %lf  %lg %le
		long double --> 16 bytes --> 18 bits for decimal part
				format : %Lf 
				
	
		float x;
				x = 0.5;
				x = 0123;
				
				x = 10e5;
	Output statement
		printf();
		
		int printf(<control_string>[,arguments]);
		
		syntax of control_string
		
			%[flag][width][.precision][h|l|L]<type_character>
			
			flag 
				+
				-
				#
			width
				n
				0n
				*
			precision
				n
				*
				
			type characters
				d or i	--> signed decimal integer
				u		--> unsigned decimal integer
				hi or hd --> signed short decimal integer
				hu  	--> unsigned short integer
				li or ld  --> signed long decimal integer
				lu		--> unsigned long decimal integer
				lli or lld
				llu
				o		--> octal integer
				x or X	--> hexa decimal integer
				f, g, e, G, E --> float 
				p		--> print address of p points (pointer)
				c 		--> char
				s		--> string
				%		--> print %
				
		output statement
			scanf();
			
			syntax:
				int  scanf(<control_string>,<addresses_of_arguments>);
		
		structure of C program
		
				documentation section
				pre-processor directives
				global declaration
				int main(){
					<local_declaration>
					<executable_statements>
					
					return 0;
				}		
				
	
	
	