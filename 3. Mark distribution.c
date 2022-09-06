//C Program of a student's mark distribution.
#include<stdio.h>

int main() {
int Bangla;
int English;
int Math;
int Science;
int Social_Science;
int aggregate;
float percentage;


printf("Enter the Bangla = ");
scanf("%d", &Bangla);

printf("Enter the English = ");
scanf("%d", &English);

printf("Enter the Math = ");
scanf("%d", &Math);

printf("Enter the Science = ");
scanf("%d", &Science);

printf("Enter the Social_Science = ");
scanf("%d", &Social_Science);

aggregate = Bangla + English + Math + Science + Social_Science;

percentage = aggregate/5;

printf("aggregate marks = %d", aggregate);

printf("percentage mark = %f", percentage);
return 0;

}
