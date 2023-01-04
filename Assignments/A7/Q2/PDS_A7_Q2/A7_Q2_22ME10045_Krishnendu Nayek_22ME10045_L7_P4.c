#include<stdio.h>
int main()
{
int n,m;
printf("\n Enter the number of terms(max.100):");
scanf("%d",&n);
printf("\n Enter the number of repetitions:");
scanf("%d",&m);
int a[n],i,j;
printf("\n Enter the elements:");
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
int count;
for(i=0;i<n;i++)
{
count=0;
for(j=0;j<n;j++)
{
if(a[i]==a[j])
count++;
}
if(count==m)
printf("\n %d appears %d times",a[i],m);
else if(count<m)
{
printf("\n No term appears %d times",m);
break;
}
}
}



