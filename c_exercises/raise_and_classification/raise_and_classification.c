#include <stdio.h>

int main (void)
{
	float price, final;
	
	printf("\nType the current product price:\n");
	scanf("%f", &price);
	
	if (price <= 49.99){
		final = price + (price * 5/100);
	} else if (price >= 50.00 && price <= 99.99){
		final = price + (price * 10/100);
	} else if (price >= 100.00){
		final = price + (price * 15/100);
	}
	
	printf("\nNew product price:\n%.2f\n", final);
	
	if (final <= 79.99){
		printf("\nPrice is: Cheap\n");
	} else if (final >= 80.00 && final <= 119.99){
		printf("\nPrice is: Normal\n");
	} else if (final >= 120.00 && final <=199.99){
		printf("\nPrice is: Expensive\n");
	} else if (final >= 200.00){
		printf("\nPrice is: Too Expensive\n");
	}
	
}
