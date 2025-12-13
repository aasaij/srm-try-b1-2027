//
//
//d0{
//	<statements>
//}while(<condition>);

//Program to find sum of positve and negative numbers
#include <stdio.h>

int main(){
	int pos_sum, neg_sum, pcnt, ncnt;
	pos_sum = neg_sum = pcnt = ncnt = 0;
	int x;	 
	do{
		scanf("%d", &x);
		if ( x > 0){
			pos_sum += x;
			pcnt++;
		}
		else if (x < 0){
			neg_sum += x;
			ncnt++;
		}
	 }while (x != 0);
	 printf("Postive : %d %d\n", pcnt, pos_sum);
	 printf("Negative : %d %d", ncnt, neg_sum);
	return 0;
}