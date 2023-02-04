#include<stdio.h>
int main()
{
    float p,r,t,c;
    printf("\n Enter the amount            = ");
    scanf("%f",&p);
    printf("\n Enter the rate              = ");
    scanf("%f",&r);
    printf("\n Enter the no of years       = ");
    scanf("%f",&t);
    c=p*(pow(1+r/100),t);
    printf("\n COMPOUND INTEREST     =  %f",c);
    return 0;
}