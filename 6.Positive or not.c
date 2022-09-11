/* This C program is about a number is positive or not.
Author: Maisha Rahman */

#include<stdio.h>

int main()
{
    int num;

    printf("Please enter the number = ");
    scanf("%d", &num);

    if(num>0)
    {
        printf("The number is positive");
    }
        else
        {
            printf("The number is negetive");
        }
        return 0;

}
