//This is a program about to convert distance into meter, feet, inches and centimeters.
#include<stdio.h>

int main() {
float distance;
 float meter;
 float feet;
 float inches;
 float centimeters;


 printf("Enter the distance: ");
 scanf("%f", &distance);

 meter = distance * 1000;
 feet = distance * 3280.48;
 inches = distance * 39370.1;
 centimeters = distance * 100000;


 printf("Meter = %f\n", meter);
 printf("Feet = %f\n", feet);
 printf("Inches = %f\n", inches);
 printf("Centimeter = %f\n", centimeters);
 return 0;

}

















