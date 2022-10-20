#include <stdio.h>

int main (void){
	int number;
	float i, sum_of_inverses;
	printf("\nType a positive integer:\n ");
	scanf(" %d", &number);
	sum_of_inverses = 0;
	
	for (i=1; i <= number;i++){
		
		float result = 1/i;
		sum_of_inverses = sum_of_inverses + result;
	}
	
	printf("\nSum of Inverses = %.4f\n", sum_of_inverses);
}
