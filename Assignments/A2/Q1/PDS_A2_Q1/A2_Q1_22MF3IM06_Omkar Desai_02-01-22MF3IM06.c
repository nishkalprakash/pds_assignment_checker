#include<stdio.h>
 int main(){

   int n,S1,S2,S3,a,b,c,d,e;
   printf("Enter the value of the integer\n");
   scanf("%d", &n);
   S1= n*(n+1)/2;
   S2= n*(n+1)*(2*n+1)/6 ;
   printf("S1=%d\n",S1);
     printf("S2=%d\n",S2);
    a=n/100;
    b=n%100;
    c=b/10;
    d=b%10;
    e=a+c+d;
    printf("S3=%d",e);

    return 0;

 }
