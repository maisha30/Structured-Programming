/*This C program is about to print  factorial value of any number.
Author: Maisha Rahman. */

#include<stdio.h>
int main(){

int number, i, n=1;
printf("Please enter the number= ");
scanf("%d", &number);

for(i=1;i<=number;i++)
{
    n=n*i;
}
 printf("The factorial value is %d", n);

return 0;
}
