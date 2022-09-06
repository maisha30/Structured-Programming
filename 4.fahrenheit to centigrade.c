//Convert fahrenheit to centigrade
#include<stdio.h>

int main() {
float f;
float c;

printf("Enter the temperature Fahrenheit = ");
scanf("%f", &f);

c = (f - 32) * 5/9;

printf("the city's temperature = %.2f", c);
return 0;
}
