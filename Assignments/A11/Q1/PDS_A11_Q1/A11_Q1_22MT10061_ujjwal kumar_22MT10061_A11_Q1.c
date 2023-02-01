#include<stdio.h>

float harmonic(float n)
{
  if(n==1)
  {  int c;
     c=1.0/n;
    return c;}
  else 
   return (harmonic(n)+harmonic(n-1));


}
  int main()
{
    int n; 
    printf("Enter thr no. to find harmonic of ");
    scanf("%d",&n);
   float d;
  d=harmonic(n);
 printf("%f",d);






   return 0;
}
