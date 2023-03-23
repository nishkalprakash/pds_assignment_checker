#include<stdio.h>
int main ()
{
   int n,S1,S3,a,p,q,r;
   long int S2;
   printf("Enter the integer n:");
   scanf("%d",&n);
   S1=n*(n+1)/2;
   S2=n*(n+1)*(2*n+1)/6;
   p=n%10;
   q=((n%100)-p)/10;
   r=((n%1000)-p-q)/100;
   S3=p+q+r;
   printf("sum of series 1 :%d\n",S1);
   printf("sum of series 2 :%d\n",S2);
   printf("sum of series 3 :%d\n",S3);
   a=S1+S2+S3;
   printf("the sum of S1,S2,S3 is %d:",a);
   return 0;

}
