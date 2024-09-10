#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define N 3
#define A 3
#define B 3
func_y(i){
     int h=0,f=0,a,k,e,d;
     for(k=1;k<=i;k++)
     {
     a=(k^2)/(2*k+1);
     d=((-1)^k)*k;
     h=a+h;
     f=d+f;
     }
    float y;
    e=sin(i/3);
    y=h-f+e;
return y;
}


int main()

{
int a,j,k,g,r,s,u,t,Filter[N],Bin_A[s],Bin_B[u];

srand(42);
for(a=0;a<N;a++)
{

int c=rand()%100+1;//random number is c//
printf("random number:%d\n",c);
for(j=0;j<N;j++)
{
Filter[j]=func_y(c);
}}
int i;

{int m=rand()%100+1;//random number is m//
printf("random number:%d\n",m);
g=func_y(m);
for(r=0,s=0,u=0;r<N,s<=A,u<=B;r++)
{
if(g<Filter[r])
{
Bin_A[s]=g;
s++;
}
else if (g>Filter[r])
{
Bin_B[u]=g;
u++;
}
printf("Filter: ");
for(i=0;i<N;i++)
{
printf("%d  ",Filter[i]);
}
printf("\nBin_A: ");
for(j=0;j<A;j++)
{
printf("%d  ",Bin_A[j]);
}
printf("\nBin_B: ");
for(k=0;k<N;k++)
{
printf("%d",Bin_B[k]);
}}

return 0;

}}

