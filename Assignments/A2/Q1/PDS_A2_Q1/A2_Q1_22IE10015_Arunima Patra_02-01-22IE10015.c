#include<stdio.h>
int main(){
int n;int S1; int S2; int S3;int d;int d1;int d2; int d3;

printf ("Enter a number(100<=n<=199):");
scanf ("%d", &n);
S1=(n*(n+1)/2);//sum of n natural numbers
S2=(n*(n+1)*(2*n+1))/6;//sum of first natural number's square
printf ("The value of S1=%d\n",S1);
printf ("The value of S2=%d\n",S2);

d=n%10;//getting the first digit
d1=d;
d=n/10;
d2=d%10;//getting the second digit
d3=d/10;//getting the third digit
S3=d1+d2+d3;
printf ("The value of S3=%d\n",S3);



return 0;
}



