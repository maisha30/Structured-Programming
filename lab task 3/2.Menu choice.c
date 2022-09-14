/*The C program is to display a menu in a resturant.
Author: Maisha Rahman*/

#include<stdio.h>

int main()
{
    int choice;

    printf("FOOD MENU\n");
    printf("1.Rice\n");
    printf("2.chicken fry\n");
    printf("3.Fish fry\n");
    printf("4.Chicken chili\n");
    printf("5.Nun\n");


    printf("Enter the food you want to order = ");
    scanf("%d", &choice);


    if(choice==1)
    {
        printf("Rice");
    }
    else if(choice==2)
    {
        printf("chicken fry");
    }
    else if(choice==3)
    {
        printf("Fish fry");
    }
    else if(choice==4)
    {
        printf("Chicken chili");
    }
      else if(choice==5)
    {
        printf("Nun");
    }
    else
    {
        printf("Not avilable");
    }
    return 0;
}
