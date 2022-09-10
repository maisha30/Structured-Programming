//This is a c program about sum of five-digit number.

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

    n1 = (num%10);
    n2 = (num/10)%10;
    n3 = (num/100)%10;
    n4 = (num/1000)%10;
    n5= (num/10000);

    sum = n1 + n2 + n3 + n4 + n5;

    printf("\n the sum of the five digit is = %d", sum);
    return 0;

}
