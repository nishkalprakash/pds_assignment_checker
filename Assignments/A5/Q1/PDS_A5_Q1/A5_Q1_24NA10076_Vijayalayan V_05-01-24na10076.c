#include<stdio.h>
int main()
{
   int n,N=100,i=0,l,m=0;
   scanf("%d",&n);
   int a[n];
   if (n>N)
     {
       printf("error: n>100\n");
     }
   else
     {
      while (i<n)
          {
           scanf("%d",&a[i]);
           i+=1;
          }
      i=0;
      for(i=0;i<n;i+=1)
         {
          l=a[i];
          if (a[i]<0)
             {
              a[i]=a[m];
              a[m]=l;
              m+=1;
              }
          }
       i=0;
       for(i=0;i<n;i+=1)
          {
           printf("%d ",a[i]);
          }
       printf("\n");
       }
     return 0;
}
               
