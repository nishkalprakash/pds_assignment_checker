#include <stdio.h>
int main()
{
 int n;
 printf("ENTER THE NUMBER n:");
 scanf("%d",&n);
 int S1,S3;
    S1 = (n)*(n+1)/2;
    long int S2;
    S2 = (n)*(n+1)*(2*n+1)/6;
    S3 =  n/100+(n/10)%10+n%10;
    	printf("%d,%ld,%d",S1,S2,S3);
    	
    
  return 0;
  }
  