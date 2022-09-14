/*This C program is about gross salary of a employee.
Author:Maisha Rahman*/

#include<stdio.h>

int main()
{
    float basic_salary, da, hra, gross_salary;

    printf("Please enter the basic salary = ");
    scanf("%f", &basic_salary);


    if(basic_salary<=10000)
    {
        da = 0.8*basic_salary;
        hra = 0.2*basic_salary;
    }
    else if(basic_salary<=20000)
    {
        da = 0.9*basic_salary;
        hra = 0.25*basic_salary;
    }
    else if(basic_salary>20000)
    {
        da = 0.95*basic_salary;
        hra = 0.3*basic_salary;
    }
    else
    {
        printf("Not acceptable");
    }

    gross_salary = basic_salary + da + hra;
    printf("Employee's gross salary is = %.2f", gross_salary);

    return 0;
}
