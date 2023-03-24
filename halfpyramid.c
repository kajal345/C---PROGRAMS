#include <stdio.h>  
 
void main()  
{  
     
    int i, j,num, k;  
    printf (" Enter a number to define the columns: \n ");  
    scanf("%d", &num);   
    printf("\n");  
    for (i = 1; i <=num; i++)   
    {  
        for (j = i; j <num; j++)   
        {  
            printf(" ");   
        }  
        for (k = 1; k <= i; k++)  
        {  
            printf("*"); // print the Star  
        }  
        printf ("\n");   
    }  
    for (i = 1; i <=num; ++i)   
    {  
        for (j = 2; j <= i; j++)  
        {  
            printf(" ");   
        }  
        for (k = i; k <=num; k++)  
        {  
            printf("*"); // print the Star  
        }  
        printf ("\n");   
    }  
   
}  