#include <stdio.h>

int main(void)
{
	int code;
	
	while(code < 1 || code > 30){
		printf("\nType location code (1 to 30):\n");
		scanf("%d",&code);
		if(code < 1 || code > 30)
			printf("\nInvalid code!\n");
	}
	
	switch(code)
	{
		case 1:
			printf("\nSouth\n");
			break;
		case 2:
			printf("\nNorth\n");
			break;
		case 3:
			printf("\nEast\n");
			break;
		case 4:
			printf("\nWest\n");
			break;
		default:
			if (code == 5 || code == 6)
				printf("\nNorthwest\n");
			else if(code == 7 || code == 8 || code == 9)
				printf("\nSoutheast\n");
			else if(code >= 10 && code <= 20)
				printf("\nCenterwest\n");
			else if(code >= 21 && code <=30) 
				printf("\nNortheast\n");
	}
}
