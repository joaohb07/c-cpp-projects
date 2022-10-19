#include <stdio.h>


int main (void)
{
	int num1, num2, result, options;
	
	printf("\nEnter the first number:\n");
	scanf("%d", &num1);
	
	printf("\nEnter the second number:\n");
	scanf("%d", &num2);
	
	while(options < 1 || options > 3){
		printf("\nChoose your option:\n(1) Average between them\n(2) Difference between the largest to smallest\n(3) The product of both of them\n");
		scanf("%d", &options);
	}
	
	switch(options)
	{
		case 1:
			result = (num1 + num2)/2;
			printf("\nAverage = %d\n", result);
			break;
		case 2 :
			if(num1 > num2)
				result = num1 - num2;
		    else result = num2 - num1;
		    	printf("\nDifference = %d\n", result);
		    break;
		case 3:
			result = num1 * num2;
			printf("\nProduct = %d\n", result);
			break;
		default:
			break;
   }
	
}
