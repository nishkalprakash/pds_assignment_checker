#include<stdio.h>
int main(){
   int n;
      printf("enter value of n \n");//assigning value to variable n
      scanf("%d",&n);               //taking value of n from user

      int S1=n*(n+1)/2;              //S1=1+2+...+n = n*(n+1)/2
      printf("S1= %d \n",S1);        //printing value of S1

      int S2=n*(n+1)*(2*n+1)/6;      //S2=1*1 + 2*2 +...+n*n = n*(n+1)*(2*n+1)/6
      printf("S2= %d \n",S2);        //printing value of S2

      int S3=(n/100) +(n-((n/100)*100))/10 + n%10;
      printf("S3= %d \n",S3);        //printing value of S3

return 0;
}
