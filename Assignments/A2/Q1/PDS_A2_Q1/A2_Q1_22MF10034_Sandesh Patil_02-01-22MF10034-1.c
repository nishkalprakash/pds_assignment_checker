#include<stdio.h>

int main()
{
 int n ,s1,s2,s3;

  printf("enter value of n");
  scanf("%d",&n);

  printf("the value of s1 is %d\n", n*(n+1)/2);
  printf("the value of s2 is %d\n", n*(n+1)*(2*n+1)/6);
  printf("the value of s3 is %d\n",n%10+ (n/10)%10 + n/100);

    return 0;
}
