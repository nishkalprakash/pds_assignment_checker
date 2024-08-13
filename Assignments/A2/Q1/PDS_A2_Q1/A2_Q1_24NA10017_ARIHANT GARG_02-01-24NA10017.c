
#include <stdio.h>
/*to compute the sum of the given series
Code creater-> Arihant Garg
Roll No-> 24NA10017*/

int main(){

      int n;
      int S1;
      int S2;
      int S3;
      int x,y,z;
      
      printf("Enter any Number");
      
      scanf("%d",&n);
      
      S1=((n)*(n+1))/2;
      S2=((n)*(n+1)*(2*n+1))/6;
      x=n%10;
      y=(n/10)%10;
      z=(n/100)%10;    
      
      S3=x+y+z;
      
      printf("S1=%d",S1);
      printf("\nS2=%d",S2);
      printf("\nS3=%d",S3);
      
      
      return 0;
      }
      
