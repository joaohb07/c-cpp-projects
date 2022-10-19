#include <stdio.h>

int main(void)
{
	int product_code, product_amount;
	float unit_price, total_price,final_price, discount;
	while(product_code < 1 || product_code > 40){
		printf("\nProduct Code (1 to 40):\n");
		scanf("%d", &product_code);
	}
	printf("\nProduct Amount:\n");
	scanf("%d", &product_amount);
	
	
	if (product_code >=1 && product_code <=10){
		unit_price = 10.00;
		total_price = product_amount * 10.00;
			if (total_price <= 249.99){
				discount = total_price * 5/100;
				final_price = total_price -  discount;
			}
			else if (total_price >= 250.00 || total_price <= 499.99){
				discount = total_price * 10/100;
				final_price = total_price -  discount;
			}
			else if (total_price >= 500.00){
				discount = total_price * 15/100;
				final_price = total_price -  discount;
			}
			
	} else if (product_code >=11 && product_code <=20){
		unit_price = 15.00;
		total_price = product_amount * 15.00;
			if (total_price <= 249.99){
				discount = total_price * 5/100;
				final_price = total_price -  discount;
			}
			else if (total_price >= 250.00 && total_price <= 499.99){
				discount = total_price * 10/100;
				final_price = total_price -  discount;
			}
			else if (total_price >= 500.00){
				discount = total_price * 15/100;
				final_price = total_price -  discount;
			}
	} else if (product_code >=  21 && product_code <= 30 ){
		unit_price = 20.00;
		total_price = product_amount * 20.00;
			if (total_price <= 249.99){
				discount = total_price * 5/100;
				final_price = total_price -  discount;
			}
			else if (total_price >= 250.00 && total_price <= 499.99){
				discount = total_price * 10/100;
				final_price = total_price -  discount;
			}
			else if (total_price >= 500.00){
				discount = total_price * 15/100;
				final_price = total_price -  discount;
			}
	} else if (product_code >= 31 && product_code <= 40){
		unit_price = 30.00;
		total_price = product_amount * 30.00;
			if (total_price <= 249.99){
				discount = total_price * 5/100;
				final_price = total_price -  discount;
			}
			else if (total_price >= 250.00 && total_price <= 499.99){
				discount = total_price * 10/100;
				final_price = total_price -  discount;
			}
			else if (total_price >= 500.00){
				discount = total_price * 15/100;
				final_price = total_price -  discount;
			}
	}
			
	printf("\nUnit Price:\n$%.2f", unit_price);
	printf("\nTotal Price:\n$%.2f", total_price);
	printf("\nDiscount:\n$%.2f", discount);
	printf("\nFinal Price:\n$%.2f\n", final_price);
	
}
