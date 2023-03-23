#include<stdio.h>
int main()
{
int n;
printf("Enter an integer n:\n");
scanf("%d",&n);
printf("%d",n);
int S1=n*(n+1)/2;
int S2=n*(n+1)*(2*n+1)/6;
printf("S1 = %d\n",S1);
printf("S2 = %d\n",S2);
int S3= (n%10) + (n/10)%10 + (n/100)%10;
printf("S3 = %d\n",S3);
return 0;
}

