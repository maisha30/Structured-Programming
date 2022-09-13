/*This C program is to find the shortest destination.
Author:Maisha Rahman */

#include<stdio.h>

int main()
{
    float destination_A;
    float destination_B;

    printf("Please enter the route A= ");
    scanf("%f", &destination_A);

    printf("Please enter the route B= ");
    scanf("%f", &destination_B);

    if(destination_A>destination_B)
    {
        printf("B is the shortest route");
    }
    else
    {
        printf("A is the shortest route");
    }
    return 0;
}
