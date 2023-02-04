#include<stdio.h>
int main()
{
    int no,leap,noleap;
    printf("\n Enter the year   = ");
    scanf("%d",&no);
    if(no%4==0)
    {
        printf("\n IT IS A LEAP YEAR");
    }
    else
    {
        printf("\n IT IS NOT A LEAP YEAR");
    }
    return 0;
}