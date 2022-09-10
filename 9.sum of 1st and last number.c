//this is a c program about the sum of 1st and last digit of four digit.

#include<stdio.h>

int main()
{
    int n1;
    int n2;
    int n3;
    int n4;
    int n5;
    int num;
    int sum;

    printf("Please enter the five-digit = ");
    scanf("%d", &num);

    n4 = (num%10);
    n3 = (num%10)/10;
    n2 = (num%100)/10;
    n1 = (num/1000);

    sum = n4 + n1;

    printf("\n the sum of the five-digit is = %d", sum);
    return 0;

}
