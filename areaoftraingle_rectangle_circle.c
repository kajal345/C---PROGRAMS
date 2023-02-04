#include<stdio.h>
int main()
{
    float area,b,h,l,w,r;
    int no;
    printf("\n 1. AREA OF TRAINGLE    \n 2. AREA OF RECTANGLE    \n 3. AREA OF CIRCLE");
    printf("\n Enter the number between 1-3  =  ");
    scanf("%d",&no);
    switch(no)
    {
        case 1:
        printf("\n ENTER THE BASE   =  ");
        scanf("%f",&b);
        printf("\n ENTER THE HEIGHT = ");
        scanf("%f",&h);
        area= 0.5*b*h;
        printf("\n AREA OF TRAINGLE  =  %f",area);
        break;
        case 2:
        printf("\n ENTER THE LENGHT  =  ");
        scanf("%f",&l);
        printf("\n ENTER THE WIDTH   = ");
        scanf("%f",&w);
        area=l*w;
        printf("\n AREA OF REACTANGLE  =  %f",area);
        break;
        case 3:
        printf("\n ENTER THE RADIUS   =  ");
        scanf("%f",&r);
        area= 3.14*r*r;
        printf("\n AREA OF CIRCLE  =  %f",area);
        break;
    }   
    return 0;
}