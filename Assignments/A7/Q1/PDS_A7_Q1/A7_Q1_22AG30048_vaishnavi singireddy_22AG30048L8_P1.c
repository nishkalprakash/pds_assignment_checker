



#include<stdio.h>
int main()
{
int a[5],b[6],i,m,j;
printf("enter five numbers\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<3;i++)
{
if(a[i]<a[i+1] && a[i+1]<a[i+2] && a[i+2]<a[i+3] )
{
for(i=0;i<5;i++)
{
printf(" %d",a[i]);
}
}
else
printf("no output");
}
printf("enter a number\n");
scanf("%d",&m);

scanf("%d",&b[j]);
if(b[i]==a[i]) //&& b[1]==a[1] && b[2]==a[2] && b[3]==a[3] && b[4]==a[4] && b[5]==a[5])
{
b[6]=m;
for(j=0;i<6;j++)
{
scanf("%d",&b[j]);
printf("%d",b[j]);
}
}
}




