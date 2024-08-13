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
    
    	printf("%d,%ld",S1,S2);
    
  return 0;
  }
  
