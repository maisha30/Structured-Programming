/*This C program is about to calculate the leap years.
Author: Maisha Rahman */

#include<stdio.h>
int main()
{

    int year;

    printf("Enter the year= ");
    scanf("%d", &year);

    if((year%4==0) && (year%400==0) || (year%100!=0))
    {
    printf("The year is leap year %d", year);
    }
    else
    {
        printf("The year is not leap year %d", year);
    }

    return 0;

}
