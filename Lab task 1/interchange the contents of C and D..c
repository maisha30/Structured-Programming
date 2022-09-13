//C program about the interchange the contents of C and D.
#include<stdio.h>

int main()
{
    int C;
    int D;
    int X;

    printf("Enter the value C = ");
    scanf("%d", &C);

    printf("Enter the value D = ");
    scanf("%d", &D);

C = D;
D = C;
X = C = D;


    printf("the value of C = ", C);
    printf("the value of D = ", D);
    return 0;

}







