/*This C program is about to find integer m.
Author:Maisha Rahman*/

#include<stdio.h>

int main()
{
    int m;

    printf("Please enter the number = ");
    scanf("%d", &m);

    if(m>0)
    {
        printf("n is 1");
    }
    else if(m==0)
    {
        printf("n is 0");
    }
    else if(m<0)
    {
        printf("n is -1");
    }
    else
    {
        printf("unavilable");
    }
    return 0;
}
