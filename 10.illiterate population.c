// This a C program about the calculation of illiterate people in a town.

#include<stdio.h>

int main()

{
int t_lit;
int men;
int population;
int lit_men;
int women;
int illi_men;
int illi_women;
int lit_women;
int t_men;

population=80000;


men = (52*population)/100; //calculation of men.

women= (population-men); //calculation of women.

t_lit=(48*population)/100; //calculation of literacy.

lit_men =(35*population)/100; //calculation of lit men.

lit_women = t_lit-lit_men; //calculation of lit women.

illi_men = men-lit_men; //calculation of illiterate men.

illi_women= women-lit_women; //calculation of illiterate women.



printf("\n the population is = %d", population);
printf("\n the total number of men is =%d ", men);
printf("\n the total number of women is =%d", women);
printf("\n the total number of lit population = %d", t_lit);
printf("\n the number of lit men is = %d", lit_men);
printf("\n the number of lit women is = %d", lit_women);
printf("\n the number of illiterate men is = %d", illi_men);
printf("\n the number of illiterate women is = %d", illi_women);

return 0;

}
