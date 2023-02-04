#include<stdio.h>
int main()
{
    float bme,bee,pps,maths,physics,sum,percentage;
    printf("\n ***********ENTER YOUR MARKS*************");
    printf("\n BME       = ");
    scanf("%f",&bme);
    printf("\n BEE       = ");
    scanf("%f",&bee);
    printf("\n PPS       = ");
    scanf("%f",&pps);
    printf("\n MATHS     = ");
    scanf("%f",&maths);
    printf("\n PHYSICS   = ");
    scanf("%f",&physics);
    sum=bme+bee+pps+maths+physics;
    percentage=sum/500*100;
    printf("\n SUM          =  %f",sum);
    printf("\n PERCENTAGE   = %f",percentage);
    if(percentage>75)
    {
        printf("\n YOU GOT DISTINCTION");
    }
    else if(percentage>60 && percentage<=75)
    {
        printf("\n YOU GOT FIRST CLASS");
    }
    else if(percentage>50 && percentage<=60)
    {
        printf("\n YOU GOT SECOND CLASS");
    }
    else if(percentage>35 && percentage<=50)
    {
        printf("\n YOU JUST PASSED");
    }
    else
    {
        printf("\n YOU ARE FAIL  \n BETTER LUCK NEXT TIME");
    }
    return 0;
}