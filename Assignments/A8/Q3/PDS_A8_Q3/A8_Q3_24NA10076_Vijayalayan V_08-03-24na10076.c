#include<stdio.h>
int main()
{
 int i,n,k,l,g,max,f;
 printf("array size");
 scanf("%d",&n);
 int a[n];
 printf("array elements\n");
 for(i=0;i<n;i+=1)
    {
     scanf("%d",&a[i]);
     }
 for(i=0;i<(n-1);i+=1)
     {
      k=a[i];
      for(l=1;l>0;l+=1)
         {
          if((k%10)==k) break;
          else k=(k/10);
          }
      max=k;
      for(g=i;g<n;g+=1)
         {
          if (max<a[g])
             {
              max=a[g];
              f=g;
              }
          }
      temp=a[f];
      a[f]=k;
      a[i]=temp;
      }
 printf("\n");
 for(i=0;i<n;i+=1)
     print("%d",a[i]);
 return 0;
}
