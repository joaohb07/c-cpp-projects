/*
Make a program that takes the height (in meters) and gender (Male or Female) of a person and
to calculate and display your ideal weight using the following formulas:
Male (72.7 * height) - 58
Female (62.1 * height) - 44.7
*/

#include <stdio.h>

int main(void)
{
  float height, weight;
  char gender;
  printf("\nType height in meters:\n");
  scanf(" %f",&height);

  do{
    printf("\nType gender M or F:\n");
    scanf(" %c",&gender);

    switch (gender)
    {
    case 'M':
      weight = (72.7 * height) - 58;
      printf("\nIdeal weight:\n%.3f\n",weight);
      return 0;
      break;

    case 'F':
      weight = (62.1 * height) - 44.7;
      printf("\nIdeal weight:\n%.3f kg\n",weight);
      return 0;
      break;
    
    default:
      printf("\nInvalid Gender %c (type M or F)\n", gender);
      break;
    }
  }while(1);
}
