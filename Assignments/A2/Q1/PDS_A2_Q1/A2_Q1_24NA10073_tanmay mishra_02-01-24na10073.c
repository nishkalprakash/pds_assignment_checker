//prgram to compute the sum of series, sum of square of numbers in series,sum of digits in a number
//code creator : tanmay mishra
//roll number : 24na10073


#include <stdio.h> 
int main()
{
int n,s1,s2,s3;

printf("enter a number n:");
scanf("%d" , &n );
s1=(n*(n+1))/2;

printf("s1 %d: " , s1);

s2=(n*(n+1)*(2*n+ 1))/6 ;

printf("s2 %d :" , s2 );

s3=(n%10) + ((n/10)%10) + n/100 ;


printf("s3 %d:" , s3 );












return 0;

}
