// 23ME30001
//AARYA MAJALI

#include <stdio.h>
#include <stdlib.h>
int main()
{
  int x,sum=0,y,max=0,secondmax=0,k;
  printf("enter an integer");
  scanf("%d",&x);
  y=x,sum=0;
  while (y>0)   
    { 
     k=y%10;    // extracting the digit
     sum=sum + (y%10);
     y=y/10;
     if (k>max) max=k;    // checking max digit
     if ((k>secondmax)&& (k!=max)) secondmax=k;   // checking second max digit
    }
   printf("the sum of the digits is %d",sum);
   printf("the largest digit is %d",max);
   printf("the second largest digit is %d",secondmax);
  return 0;
}
 
 
  
