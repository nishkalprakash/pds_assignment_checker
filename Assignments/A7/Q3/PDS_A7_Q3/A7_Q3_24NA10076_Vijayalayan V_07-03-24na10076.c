#include<stdio.h>
int main()
   {
   int n,bins,i,max=0,min=1000000000000000000000000000000000,k,j,t;
   printf("no of bins and elements in array ");
   scanf("%d%d",&bins,&n);
   int a[n];
   for(i=0;i<n;i+=1)
      {
       printf("\na[%d]",i);
       scanf("%d",&a[i]);
       }
   for(i=0;i<n;i+=1)
      {
      if (max<a[i])
         {
          max=a[i];
          }
       if (min>a[i])
          {
          min=a[i];
          }
       }
    k=((max-min)/bins);
    k+=1;
    for(j=1;j<=bins;j+=1)
       { t=0;
         printf("bin%d->",j);
         for(i=0;i<n;i+=1)
            {
             if ((a[i]>(min+((j-1)*k)))&&(a[i]<(max-((bins-j)*k))))
                {
                 printf("%d,",a[i]);
                 t+=1;
                 }
             printf("\n");
             }
        }
     return 0;
     
   }     
               
                 
        
    
    
