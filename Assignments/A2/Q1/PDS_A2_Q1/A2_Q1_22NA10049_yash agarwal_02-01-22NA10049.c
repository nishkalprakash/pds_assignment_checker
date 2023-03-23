#include <stdio.h>
int main()
{

int n;

scanf("%d",&n);                        //taking input in n
int S1=(n*(n+1))/2;                    // calulating sum of all natural numbers till n
long S2=(n*(n+1)*((2*n)+1))/6;         // calculating sum of squares of all natural number till n

int a,b,c;                             // using these to store the digits of n individually

a=n%10;                                // storing the ones place digit of n
n=n/10;
b=n%10;                                // storing the last two digits of n
c=n/10;                                //storing the hundreds place digit in c

int S3=a+b+c;                          // calculating sum of digits of n
                                       //printing the values of S1 ,S2 and S3
printf(" S1 =%d\n",S1);                // sum of natural numbers
printf(" S2 = %ld\n",S2);              // sum of squares of natural numbers
printf(" S3 = %d\n",S3);               // sum of digits of n

return 0;

}
