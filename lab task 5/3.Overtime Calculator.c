/*This C program is about to calculate overtime.
Author: Maisha Rahman. */

#include<stdio.h>
int main(){

 int overtime_pay, overtime, working_hours, i;

    for(i = 0; i < 10; i++)
    {
        printf("Enter the working hours of the employee: ");
        scanf("%d", &working_hours);
        overtime = working_hours - 36;
        if(working_hours > 36)
        {
            printf("The employee worked %d hours overtime\n", working_hours - 36);
            printf("His overtime payment is %d BDT\n", overtime * 120);
        }
        else{
            printf("The employee needs to work more  than 36 hours per week for overtime payment\n");
        }
    }

    return 0;

}














