/*This C program is to find a number if it's negetive or not.
Author:Maisha Rahman.*/

#include<stdio.h>

int main()
{
    int num;
    printf("Please enter the number = ");
    scanf("%d", &num);

    if(num<0)
{
    printf("The number is negetive");
}
    else
    {
        printf("The number is not negetive");
    }
    return 0;
}
