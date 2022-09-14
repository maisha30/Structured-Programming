/*This C PROGRAM is to input the week number to print week day.
Author: Maisha Rahman*/

#include<stdio.h>

int main()
{
    int num;

    printf("Week Number\n");
    printf("1.Saturday\n");
    printf("2.Sunday\n");
    printf("3.Monday\n");
    printf("4.Tuesday\n");
    printf("5.Wednesday\n");
    printf("6.Thursday\n");
    printf("7.Friday\n");

    printf("Please enter the Week Number = ");
    scanf("%d", &num);

    if(num==1)
    {
        printf("The day is Saturday");
    }
    else if(num==2)
    {
        printf("The day is Sunday");
    }
    else if(num==3)
    {
        printf("The day is Monday");
    }
    else if(num==4)
    {
        printf("The day is Tuesday");
    }
    else if(num==5)
    {
        printf("The day is Wednesday");
    }
    else if(num==6)
    {
        printf("The day is Thursday");
    }
    else if(num==7)
    {
        printf("The day is Friday");
    }
    else
    {
        printf("Not acceptable");
    }
    return 0;
}
