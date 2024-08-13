//program to compute the sum of the series
//code creater:vijayalayan v
//roll number:24NA10076
#include<stdio.h>
int main()
{ 
     int n,s1,s2,s3,k,l,m;
     {printf("\nenter n to perform calculation");
     scanf("%d",&n);
     s1=(n*(n+1))/2;
     printf("\nsum of numbers from 1 to %d =%d",n,s1);
     s2=(n*(n+1)*((2*n)+1))/6;
     printf("\nsum of squares of from 1 to %d=%d",n,s2);
     k=n%10;
     l=((n%100)-k)/10;
     m=(n-(n%100))/100;
     s3=k+l+m;
     printf("\nsum of digits in %d=%d\n",n,s3);}
     return 0;
}
     
     
