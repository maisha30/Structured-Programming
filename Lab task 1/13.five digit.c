//This is a C program about five digit number.

#include<stdio.h>

int main()

{
    int num;
    int n1;

    printf("Enter the five digit = ");
    scanf("%d", &num);

    num = num + 11111;

    printf("\n the input is = %d", num);
    return 0;
}
