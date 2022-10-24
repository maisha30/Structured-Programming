/*This C program is to average 10 integer number.
Author: Maisha Rahman */

#include<stdio.h>
int main(){

float average, sum;

printf("Please enter the numbers: ");

for(int i=1; i<=10; i++)
{
   int num;
   scanf("%d", &num);
   sum += num;
}
average = sum / 10;

printf("Average of 10 numbers is : %.2f", average);

return 0;
}
