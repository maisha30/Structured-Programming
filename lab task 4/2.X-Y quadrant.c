/*This C program is about 4 quadrant.
Author: Maisha Rahman. */

#include<stdio.h>
int main()
{
float x,y;

printf("Enter the value of x & y = ");
scanf("%f %f", &x , &y);

if(x>0 && y>0)

{
    printf("The point(%f%f) lies in the 1st quadrant\n", x,y);
}
else if(x<0 && y>0)
{
    printf("The point(%f%f) lies in the 2nd quadrant\n", x,y);
}
else if(x<0 && y<0)
{
    printf("The point(%f%f) lies in the 3rd quadrant", x,y);
}
else if(x>0 && y<0)
{
    printf("The point(%f%f) lies in the 4th quadrant\n", x,y);
}
else
{
    printf("The point(%f%f) lies in the center\n", x,y);
}
return 0;
}
