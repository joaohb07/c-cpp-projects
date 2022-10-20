#include <stdio.h>
#include <stdlib.h>


int main(){

    float age=0, mean_height = 0, height = 0, people_number= 0, heightCQ = 0;
    int verify = 0;


    while(verify == 0)
    {   
        printf("\nType the age (-1 to exit):\n");
        scanf("%f", &age);
        if(age > 0)
            {
                printf("\nType the height:\n");
                scanf("%f", &height);

                if(age>50){
                    heightCQ = heightCQ + height;
                    people_number++;
                }
            }

        else{
            verify = 1;
        }
    }

    mean_height = heightCQ/people_number;
    printf("\nMean height:\n%f\n",mean_height);

    return 0;
}
