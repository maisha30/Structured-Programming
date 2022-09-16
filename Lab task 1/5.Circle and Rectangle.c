/* This C program is about to calculate area and circumference and also calculate the length & breadth of a rectangle.
Author: Maisha Rahman*/

#include<stdio.h>


int main()
{
    float l, b, radius, r_area, r_perimeter, c_area, c_cir;

    //For rectangle.
    printf("please enter the length of the rectangle = ");
    scanf("%f", &l);

    printf("Please enter the breadth = ");
    scanf("%f", &b);


    //For circle.
    printf("Please enter the radius of the circle =  ");
    scanf("%f", &radius);



    r_area = l * b;
    r_perimeter = 2 *(l + b);  // calculation of rectangle.



    c_area = 3.1416 * radius * radius;
    c_cir = 2 * 3.1416 * radius;    // calculation of circle.


    printf("\n The area of rectangle is = %.2f", r_area);
    printf("\n The perimeter of rectangle is = %.2f", r_perimeter);
    printf("\n The area of circle is = %.2f", c_area);
    printf("\n The circumference of circle is = %.2f", c_cir);

    return 0;
}
