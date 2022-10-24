/*This C program is to build a reverse Number sequence pyramid.
Author: Maisha Rahman.*/


#include <stdio.h>

int main()
{
    int i, s, rows=5;

    for(i=rows; i>=1; i--)
    {

        for(s=i; s>=1; s--)
        {
            printf("%d", s);
        }

        printf("\n");
    }

    return 0;
    }
