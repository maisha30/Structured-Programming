//This is a c program about the calculation of cost price.

#include<stdio.h>

int main()
{
    float sell_price;
    float profit;
    float cost_price;

    printf("Please enter the selling price = ");
    scanf("%f", &sell_price);

    printf("Please enter the profit of 15 items = ");
    scanf("%f", &profit);

    cost_price = (sell_price - profit)/15;

    printf("\n the cost price of 15 items are: %f", cost_price);
    return 0;
}
