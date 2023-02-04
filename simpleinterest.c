#include<stdio.h>
int main()
{
    float p,r,t,i; 
    printf("\n Enter the amount        = ");
    scanf("%f",&p);
    printf("\n Enter the rate          = ");
    scanf("%f",&r);
    printf("\n Enter the no of years   = ");
    scanf("%f",&t);
    i=p*r*t;
    printf("\n SIMPLE INTEREST   = %f ",i);
    return 0;
}