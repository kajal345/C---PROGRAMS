#include<stdio.h>
int main()
{
    int no,rev=0;
    printf("\n Enter the number = ");
    scanf("%d",&no);
    while(no>0)
    {
        rev=(rev*10)+(no%10);
        no=no/10;
    }
    printf("\n REVERSE NUMBER = %d",rev);
    return 0;
}