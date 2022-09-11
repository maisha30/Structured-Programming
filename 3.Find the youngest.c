//This C program is about to find the youngest between Arif and Joy.

#include<stdio.h>

int main()
{
    int arif_age;
    int Joy_age;

    printf("Please enter the Arif's age = ");
    scanf("%d", &arif_age);

    printf("Please enter the Joy's age = ");
    scanf("%d", &Joy_age);


    if(arif_age>Joy_age)
{


    printf("Joy is the youngest = %d");
    }


        else
    {


        printf("Arif is the youngest = %d");}
        return 0;
}
