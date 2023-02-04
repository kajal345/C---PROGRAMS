#include <stdio.h>
int main() 
{
  int no,sum=0;
  printf("\n Enter the number = ");
  scanf("%d",&no);
  if(no<10) 
  {
    sum=sum+(no*2);
  }
  else 
  {
    sum=sum+(no%10);
    while(no>9) 
    {
      no=no/10;
    }
    sum=sum+no;
  }
  printf("\n SUMMATION =  %d", sum);
  return 0;
}