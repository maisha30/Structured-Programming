// This C program is about measuring profit.


#include<stdio.h>

int main()
{
    float selling_price;
    float cost_price;

    printf("Please enter the selling price = ");
    scanf("%f", &selling_price);

    printf("Please enter the cost price = ");
    scanf("%f", &cost_price);

    if(selling_price>cost_price)
    {
        printf(" the profit is = %.2f", selling_price-cost_price);
    }
        else
        {
            printf(" the loss is = %.2f", cost_price-selling_price);
        }
        return 0;
    }
