//Program to compute the sum of series
//Code Creator:Shreya Ashok Kumar
//Roll No:24NA10069
#include <stdio.h>
int main()
{
int n,s1,s2,s3,a,b,c;

printf ("Enter an integer: ");
scanf ("%d",&n);

s1=(n+1)*n/2;
s2=n*(n+1)*(2*n+1)/6;
a=n/100;
b=n/10-a*10;
c=n/1-a*100-b*10;
s3=a+b+c;
printf("s1== %d ,/n s2=%d, /n s3=%d",s1,s2,s3);

return 0;
}


