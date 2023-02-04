#include<stdio.h>
int main()
{
    int no;
    printf("\n Enter the number = ");
    scanf("%d",&no);
    if(no%2==0)
    {
        printf("\n IT IS A PRIME NUMBER");
    }
    else
    {
        printf("\n IT IS NOT A PRIME NUMBER");
    }
    return 0;
}