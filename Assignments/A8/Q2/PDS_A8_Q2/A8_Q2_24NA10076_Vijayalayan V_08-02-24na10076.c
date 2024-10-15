#include<stdio.h>
int main()
{
 int n,d;
 printf("print the size of the array ");
 scanf("%d",&n);
 int a[n+1],i,k,min,temp,j;
 printf("enter array elements\n");
 for(i=0;i<n;i+=1)
    {
     scanf("%d",&a[i]);
     }
  for(i=0;i<n;i+=1)
    {
     min=a[i];
     j=i;
     for(k=(i+1);k<n;k+=1)
        {
         if (a[i]>a[k])
            {
             j=k;
             min=a[k];
             }
         }
      temp=a[j];
      a[j]=a[i];
      a[i]=temp;
      }
   int m;
   printf("enter any number to insert ");
   scanf("%d",&m);
   a[n]=m;
   for(i=0;i<(n+1);i+=1)
    {
     if (m<a[i])
        {
         j=i;
         break;
         }
     }
    for(d=n;d>j;d-=1)
       {
        temp=a[d];
        a[d]=a[d-1];
        a[d-1]=temp;
        }
        
   printf("output array");
   for(i=0;i<(n+1);i+=1)
     printf("%d ",a[i]);   
}
                
