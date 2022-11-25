#include <stdio.h>
#include <math.h>
int main()
{
long int n,n1,y;double g=9.78,dist;
printf("Enter n and y\n");
scanf("%ld %ld",&n,&y);
if(n==1)
{dist=y;}
else  if(n>1 && n<1000)
{n1=n-1;dist=y+y*(2/3)*(1-pow(0.25,n1));}
else
{dist=(5/3)*y;}
printf("distance travelled:%lf",dist);
return 0;
}                   

