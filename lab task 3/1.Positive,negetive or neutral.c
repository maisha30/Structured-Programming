//This C program is about complex condition.

#include<stdio.h>

int main()
{
    float num;

    printf("Please enter the number = ");
    scanf("%f", &num);

    if(num>0)
    {
        printf("The number is Positive");
    }
    else if(num<0)
    {
        printf("The number is Negetive");

    }
    else
    {
        printf("The number is neutral");
    }

    return 0;
}
