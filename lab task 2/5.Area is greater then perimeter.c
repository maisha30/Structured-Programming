/*This C program is to find if the area is greater then perimeter.
Author: Maisha Rahman */

#include<stdio.h>

int main()
{
  float base, area, height, side_1, side_2, perimeter;

  printf("Please enter the base and height of the triangle\n");
  scanf("%f%f", &base,&height);

  printf("Please enter two sides of the triangle\n ");
  scanf("%f%f", &side_1,&side_2);

  perimeter = side_1 + side_2 + base;
  area = (1/2 * base * height);

  if(area > perimeter)
  {
      printf("area is greater then the perimeter ");
  }
  else
  {
    printf("perimeter is greater then the area ");
  }
  return 0;
}
