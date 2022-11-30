#include<stdio.h>         //header file
int main(){
     int n,i=1,j=1;
     printf("enter any integer");
     scanf("%d",&n);           //inputting integer from user
     for(i=1;i<=n;i++)
  {
      for(j=1;j<=i;j++)    
      {
        if((j%2)!=0)              //checking whether the inputted one is odd or even
         {
         printf("1");
         }
     
        else
         {
          printf("0");
         }
 
    }
     printf("\n");
 }
  return 0;
 }
      
