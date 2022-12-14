#include <stdio.h>

int main ( )
{
  int i,n,j,max,k,max2;
scanf("%d",&n);
int a[n];
  
 for(i=0;i<n;i++)
    {
  scanf("%d",&a[i]);
    }
max=a[0];
for(j=0;j<n;j++)
    {
   if (max<a[j])
       {
         max=a[j];
         k=j;
        }
    }
  printf("%d is the largest number\n",max);

int b[n];
for(i=0;i<n;i++)
{
if(i!=k)
   {
     b[i]=a[i];
   }
}

max2=b[0];
for(j=0;j<n;j++)
{
  if(max2<b[j])
  {
 max2=b[j];
   }
}
printf("%d is the second largst number\n",max2);


  return 0;

}

