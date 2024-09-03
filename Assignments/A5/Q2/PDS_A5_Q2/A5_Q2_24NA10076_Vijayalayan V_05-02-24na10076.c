#include<stdio.h>
int main()
{
  int n,N=100,i=0,m=1,k,f,h=0,l,j=-9;
  f=n-1;
  scanf("%d",&n);
  int a[n];
  if (n>N)
    {
     printf("error: n>100");
    }
  else 
     {
      while (i<n)
           {
            scanf("%d",&a[i]);
            i+=1;
           }
      printf("original array :");
      i=0;
      while (i<n)
          {
           printf("%d ",a[i]);
           i+=1;
           }
      printf("\n");
      i=0;
      for(i=0;i<n;i++)
        {
         if (j==a[i])
            continue;  
         else
         {
          m=1;
          for(k=i+1;k<n;k+=1)
             {
              l=a[f];
              if (a[i]==a[k])
                 {
                  j=a[i];
                  m+=1;
                  h+=1;
                  a[f]=a[k];
                  a[k]=l;
                  f-=1;
                  }
               }
            if (m>1)
              {printf("duplicate:\n");
               printf(" %d (%d)\n",j,m);
              }
           }
          }
       }
       n=n-h;
       printf("unique array :");
       i=0;
       while (i<(n))
            {
             printf("%d ",a[i]);
             i+=1;
             }
       printf("\n");
       return 0;
     }
                  
                  
                  
          
