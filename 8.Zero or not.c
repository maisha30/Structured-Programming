/*This C program is to find a number if it's zero or not.
Author: Maisha Rahman*/

#include<stdio.h>

int main()
{
    int num;

    printf("Please enter the number = ");
    scanf("%d", &num);

    if(num==0)
    {
        printf("The number is Zero");
    }
    else
    {
        printf("The number is not Zero");
    }
    return 0;
}
