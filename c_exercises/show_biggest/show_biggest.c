#include <stdio.h>

int main (void)
{
	int n1,n2,n3, biggest;
	
	printf("\nType the first number: \n");
	scanf(" %d", &n1);
	printf("\nType the second number: \n");
	scanf(" %d", &n2);
	printf("\nType the third number: \n");
	scanf(" %d", &n3);
	
	if (n1 > n2 && n1 > n3){
		biggest = n1;
	} else if ( n2 > n1 && n2 > n3){
		biggest = n2;
	} else if ( n3 > n1 && n3 > n2){
		biggest = n3;
	}
	
	printf("\nBiggest:\n%d\n", biggest);
}
