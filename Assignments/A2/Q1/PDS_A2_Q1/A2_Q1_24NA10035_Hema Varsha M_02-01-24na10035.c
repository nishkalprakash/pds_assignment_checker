#include <stdio.h>
int main()
{
int n,s1,s2,s3,a;
//s1=s2=s3=0;

printf("enter a number:");
scanf("%d",&n);
//s1:sum of n natural numbers
s1=(n*(n+1))/2;
//s2 : sum of squares of n natural numbers
s2=(n*(n+1)*((2*n)+1))/6;
//s3 ; sum of the digits of n
a=n;
s3+=a%10;
a/=10;
s3+=a%10;
a/=10;
s3+=a;
printf("s1= %d \n s2= %d \n s3= %d\n",s1,s2,s3);
return 0;
}
