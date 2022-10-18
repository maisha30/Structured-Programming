/*This C program is about currency notes the withdrawer will have.
Author:Maisha Rahman */

#include<stdio.h>

int main()
{
    int amount,note100,note50,note10;

    printf("Please enter the amount of currency = ");
    scanf("%d", &amount);

    note100 = amount / 100;
    note50 = (amount % 100)/50;
    note10 = (amount % 100)%50/10;

    printf("\n The numbers of notes of 100 is =%d ", 100);
    printf("\n The numbers of notes of 50 is =%d", 50);
    printf("\n The numbers of notes of 10 is =%d", 10);

    return 0;
}
