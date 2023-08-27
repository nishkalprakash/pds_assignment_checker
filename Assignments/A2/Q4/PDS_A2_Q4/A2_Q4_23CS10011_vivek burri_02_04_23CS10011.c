// name vivek
// roll no 23CS10011
#include<stdio.h>
int main(){
int m,n;
 scanf("%d%d",&m,&n);
 printf("the sum is %d\n",m+n);
 printf("the difference is %d\n",m-n);
 printf(" the product is %d\n",m*n);
 printf("\n  integer quotient is %d",m/n);
 printf("\n  integer remainder is %d",m%n);
 printf("\n  floating point quotient is %f",(float)(m/n));//here we should use type cast
 printf("\n  sum of squares is %d",m*m+n*n);
 printf("\n   square of sum is %d",(m+n)*(m+n));
 printf("\n   average as floating number is %f",(m+n)/2.0);
 printf("\n  average of sum of squares is %f",(m*m+n*n)/2.0);
 return 0;}
