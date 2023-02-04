#include<stdio.h>
int main()
{
    int a,b,addition,subtraction,multiplication;
    float division;
    printf("\n Enter the value of A =");
    scanf("%d",&a);
    printf("\n Enter the value of B =");
    scanf("%d",&b);
    addition = a+b;
    subtraction = a-b;
    multiplication = a*b;
    division       = a/(float)b;
    printf("\n ADDITION       = %d",addition);
    printf("\n SUBTRACTION    = %d",subtraction);
    printf("\n MULTIPLICATION = %d",multiplication);
    printf("\n DIVISION       = %f",division);
    return 0;
}