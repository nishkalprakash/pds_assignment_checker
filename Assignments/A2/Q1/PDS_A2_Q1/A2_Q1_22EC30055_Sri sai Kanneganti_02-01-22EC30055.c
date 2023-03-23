#include<stdio.h>
int main()
{
int n,s1,s3,a,b,c ;
long int s2 ;
printf("enter number n\n");
scanf("%d",&n);
s1 = ((n*(n+1))/2) ;
s2 = ((long)n*((long)n+1)*((2*(long)n)+1))/6 ;
a = n/100 ;
b =(n-(100*a))/10 ;
c =(n-(a*100)-(b*10)) ;
s3= a+b+c ;
printf("s1=%d\ns2=%lu\ns3=%d",s1,s2,s3);
return 0 ;
}
