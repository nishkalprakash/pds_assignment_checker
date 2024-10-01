#include<stdio.h>
int power(int x, int n){//to find the power of x
   int j, a;
   a=1;
   for(j=0;j<n;j++){
   a=a*x;}
   return a;
   }
int fact(int n){//to find the factorial of n
    int j, a;
    a=1;
    for(j=1;j<=n ;j++)
    {
     a=a*(j);
     }
     return a;
     }
int main(){
   int x, n, i;
   float sum;
   printf("Input the values");
   scanf("%d %d", &x, &n);
   for(i=1, sum=1; i<n ; i++ ){
   sum= sum+(float)power(x, i)/fact(i) ;
   }
   printf("%.4f ", sum);
   return 0;
   }
