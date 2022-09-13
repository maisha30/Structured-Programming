// This c program is about a number which will be odd or even.

#include<stdio.h>

int main()
{
    int num;

    printf("Please enter the number = ");
    scanf("%d", &num);

    if(num%2==0)

    {
        printf("The number is even = %d", num);
    }
    else
    {
        printf("The number is odd = %d", num);
    }
    return 0;
}






