//This c program is about the sum of 3 angle of triangle.
#include<stdio.h>

int main()
{
    float a,b,c,sum;

    printf("Enter the three angles of a tringle = ");
    scanf("%f %f %f", &a,&b,&c);

    if(sum = a + b + c == 180)
    {
        printf("The tringle is valid");
    }
    else
    {
        printf("The tringle is invalid");
    }
    return 0;

}

