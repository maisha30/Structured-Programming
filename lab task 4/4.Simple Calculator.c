/*This C program is about to create a simple calculator to sum, subtract, multiply, divide.
Author: Maisha Rahman */

#include<stdio.h>
int main(){

int choice;
float number1, number2, sum, sub, multi, div;

printf("1.Calculate the summation\n");
printf("2.Calculate the subtraction\n");
printf("3.Calculate the multiplication\n");
printf("4. Calculate the division\n");

printf("Make your choice\n");
scanf("%d", &choice);

if(choice==1)
{
    printf("Enter the numbers= ");
    scanf("%f%f", &number1, &number2);
    sum = number1 + number2;
    printf("The sum is %.2f", sum);
}
else if(choice== 2)
{
    printf("Enter the numbers= ");
    scanf("%f%f", &number1,&number2);
    sub = number1 - number2;
    printf("The subtraction is %.2f", sub);
}
else if(choice==3)
{
    printf("Enter the numbers= ");
    scanf("%f%f", &number1,&number2);
    multi = number1 * number2;
    printf("The multiplication is %.2f", multi);
}
else if(choice==4)
{
    printf("Enter the numbers= ");
    scanf("%f%f", &number1,&number2);
    div = number1 / number2;
    printf("The division is %.2f", div);
}
else
{
    printf("Invalid");
}
return 0;
}

















