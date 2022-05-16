#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{int i,j,k,l,a,b,c,d,e=50000,total;
int m1[]={1,2,3,4};
int m2[]={4,1,2,3};
int m3[]={3,4,1,2};
int m4[]={2,3,4,1};
// int m2[]= {7700,3700,4900,9200};
// int m3[]= {1100,6900,500,8600};
// int m4[]= {800,900,9800,2300};
for(i=0;i<4;i++)
{
for(j=0;j<4;j++)
{
for(k=0;k<4;k++)
{
for(l=0;l<4;l++)
{
if(i!=j&&j!=k&&k!=l&&l!=i)
{
a=m1[i];
b=m2[j];
c=m3[k];
d=m2[l];
total=a+b+c+d;
 if(total<e)
e=total;}
}
}
}
}
printf("%d",e);
return 0 ;   
}