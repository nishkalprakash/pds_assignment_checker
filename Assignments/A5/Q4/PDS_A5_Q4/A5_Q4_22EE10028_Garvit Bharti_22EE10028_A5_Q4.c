/*
sec = 14
roll no = 22EE10028
name = garvit
assign = 5
descrp = to divide the elements into bins
*/
#include<stdio.h>
int main()
{
int n,i;
printf("N = ");
scanf("%d",&n);
int a[n],max,min;
printf("A[N] = ");
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
max = a[0];
for(i=1;i<=n;i++)
{
if(max<a[i])
{max = a[i];}
}
min = a[0];
for(i=1;i<=n;i++)
{
if(min>a[i])
{min = a[i];}
}
int bin,j,d,e;
float c;
printf("Bins");
scanf("%d",&bin);
c = (max-min)/((float)bin) ;
for(i=0;i<=bin-1;i++)
{
printf("bin %d ->",i+1);
for(j=1,e=0;j<=n;j++)
{
if(a[j]>=min+c*i&&a[j]<min+c*(i+1))
{e++;
printf("%d, ",a[j]);
}
}
printf("\telems = %d\n",e);
}
return 0;
}






