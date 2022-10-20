#include<stdio.h>


int main (void)
{
	int overtime, absent, H;
	
	printf("\nType overtime hours:\n");
	scanf("%d", &overtime);
	printf("\nType absent hours:\n");
	scanf("%d", &absent);
	
	H = overtime - ((3 * absent)/4);
	
	if (H <= 600)
		printf("\nGratification: $100.00\n");
	else if (H >= 601 && H <= 1200)
		printf("\nGratification: $200.00\n");
	else if (H >= 1201 && H <= 1800)
		printf("\nGratification: $300.00\n");
	else if (H >= 1801 && H <= 2400)
		printf("\nGratification: $400.00\n");
	else if (H >= 2400 )
		printf("\nGratification: $500.00\n");
}
