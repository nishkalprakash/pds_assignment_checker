/* NAME:vadithya dusvanth
   ROOL NO:22PH10051
   SECTION:14
   ASSIGNMENT NO :5
   DESCRIPTION:TO FIND THE SUM OF SERIS */

#include<stdio.h>


   int power(int x,int n){
   int a,d=1;
    for(a=1;a<=n;++a)
    d=d*a;
    return 0;
  }

  int factorial(int n){
   int i,t=1;
   for(i=1;i<=n;i++)
      t=t*i;
   return(t);
  }
   int main(){
   int x,n,sum=0;
   printf("enetr any value of x: ");
   scanf("%d",&x);
   printf("enter the value of n: ");
   scanf("%d",&n);
   
   double P = power( x, n);
   double F = factorial(n);
   for(x=0;x<=n;++x)
   sum = sum + P/F ; {

   printf("sum of the series is %d",sum);
   }

   return 0;
}
