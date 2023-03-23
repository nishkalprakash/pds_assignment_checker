#include <stdio.h>
void main()
{
int n,S1,S2,S3;
printf("Enter a value for n\n");
       scanf("%d",&n);
       printf("n=%d\n",n);
       S1=(n*(n+1)/2);
       printf("S1=%d\n",(S1));
       S2=(n*(n+1)*((2*n)+1))/6;
       printf("S2=%d\n",(S2));
int a,b,c;
a=n%10;
b=(((n%100)-a)/10);
c=(n/100);
S3=(a+b+c);
printf("S3=%d",S3);


/*after giving these input I got the respective outputs:
1.


n = 110


S1 = 6105

S2 = 449735

S3 = 2

2.


n = 309


S1 = 47895

S2 = 9882335

S3 = 12

3.


n = 500


S1 = 125250

S2 = 41791750

S3 = 5

4.


n = 100


S1 = 5050

S2 = 338350

S3 = 1*/

}

