#include <stdio.h>

int main(void)
{
	float price, raise, X, final;
	int category;
	char situation;
	
	printf("\nType the product price:\n");
	scanf(" %f", &price);
	while(category < 1 || category > 3){
		printf("\nType the product category ( 1, 2 or 3 ):\n");
		scanf(" %d", &category);
	}
	while(situation != 'R' && situation != 'N'){
		printf("\nType the product situation ( R or N ):\n");
		scanf(" %c", &situation);
	}
	
	if (price <= 25.00){
		switch(category)
		{
			case 1:
				X = price * (5.0/100);
				raise = 0.0;
				if (X <= 0.99 && situation == 'R'){
					raise = 1.00;
				} else if(X <= 0.99 && situation == 'N') {
					raise = 2.00;
				} else if(X > 99.00 && situation == 'R'){
					raise = 10.00;
				} else if(X > 99.00 && situation == 'N'){
					raise = 20.00;
				}else{
					raise = X;
				}
				final = price + raise;
				break;
			case 2:
				X = price * (8.0/100);
				raise = 0.0;
				if (X <= 0.99 && situation == 'R'){
					raise = 1.00;
				} else if(X <= 0.99 && situation == 'N') {
					raise = 2.00;
				} else if(X > 99.00 && situation == 'R'){
					raise = 10.00;
				} else if(X > 99.00 && situation == 'N'){
					raise = 20.00;
				}else{
					raise = X;
				}
				final= price + raise;
				break;
			case 3:
				X = price * (10.0/100);
				raise = 0.0;
				if (X <= 0.99 && situation == 'R'){
					raise = 1.00;
				} else if(X <= 0.99 && situation == 'N') {
					raise = 2.00;
				} else if(X > 99.00 && situation == 'R'){
					raise = 10.00;
				} else if(X > 99.00 && situation == 'N'){
					raise = 20.00;
				}else{
					raise = X;
				}
				final= price + raise;
				break;
		}
	} else {
		switch(category)
		{
			case 1:
				X = price * (12.0/100);
				raise = 0.0;
				if (X <= 0.99 && situation == 'R'){
					raise = 1.00;
				} else if(X <= 0.99 && situation == 'N') {
					raise = 2.00;
				} else if(X > 99.00 && situation == 'R'){
					raise = 10.00;
				} else if(X > 99.00 && situation == 'N'){
					raise = 20.00;
				}else{
					raise = X;
				}
				final= price + raise;
				break;
			case 2:
				X = price * (15.0/100);
				raise = 0.0;
				if (X <= 0.99 && situation == 'R'){
					raise = 1.00;
				} else if(X <= 0.99 && situation == 'N') {
					raise = 2.00;
				} else if(X > 99.00 && situation == 'R'){
					raise = 10.00;
				} else if(X > 99.00 && situation == 'N'){
					raise = 20.00;
				}else{
					raise = X;
				}
				final= price + raise;
				break;
			case 3:
				X = price * (18.0/100);
				raise = 0.0;
				if (X <= 0.99 && situation == 'R'){
					raise = 1.00;
				} else if(X <= 0.99 && situation == 'N') {
					raise = 2.00;
				} else if(X > 99.00 && situation == 'R'){
					raise = 10.00;
				} else if(X > 99.00 && situation == 'N'){
					raise = 20.00;
				}else{
					raise = X;
				}
				final= price + raise;
				break;
		}
	}

	printf("\nRaise:\n%.2f\nFinal Price:\n%.2f\n", raise, final);
}
