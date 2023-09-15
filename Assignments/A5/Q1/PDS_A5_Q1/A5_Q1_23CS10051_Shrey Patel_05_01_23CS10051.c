//Shrey Patel
//23CS10051

#include <stdio.h>
#include <stdlib.h>

int main()
{

int n,a[50],b,count=0;
printf("Number of values taken as input:");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
a[i]=rand()%90+10;
}

for(int i=0;i<n;i++)
printf("%d\t",a[i]);
printf("\n");

for(int i=0;i<n-2;i=i+2)
{
if(a[i]>a[i+2])
{
b=a[i+2];
a[i+2]=a[i];
a[i]=b;
count++;
}
}
for(int i=0;i<n;i++)
printf("%d\t",a[i]);
printf("\n");
printf("The number of interchanges is %d",count);
return 0;
}

