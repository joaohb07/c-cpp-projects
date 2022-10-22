#include <stdio.h>

int main(void)
{
	int age;
	
	printf("\nType the age:\n");
	scanf("%int",&age);

	if(age >= 5 && age <= 7)
		printf("\nSwim Category:\nChildren\n");
	
	else if(age >= 8 && age <= 10)
		printf("\nSwim Category:\nYoung\n");
		
	else if(age >= 11 && age <= 15)
		printf("\nSwim Category:\nTeenager\n");
		
	else if(age >= 16 && age <= 30)
		printf("\nSwim Category:\nAdult\n");
		
	else if(age > 30)
		printf("\nSwim Category:\nMaster\n");
	
	else
		printf("\nToo Young!\n");

}
