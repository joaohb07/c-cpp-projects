#include <stdio.h>

int main (void)
{
	float balance, loan;
	printf("\nType client balance:\n");
	scanf("%f", &balance);
	
	if(balance <= 199.99){
		loan = balance * 10/100;
	}else if(balance >= 200.00 && balance <= 299.99){
		loan = balance * 20/100;
	}else if(balance >= 300.00 && balance <= 399.99){
		loan = balance * 25/100;
	}else if(balance >= 400.00){
		loan = balance * 30/100;
	}else{
		loan = 0;
	}
	printf("\nLoan:\n$%.2f\n", loan);
}
