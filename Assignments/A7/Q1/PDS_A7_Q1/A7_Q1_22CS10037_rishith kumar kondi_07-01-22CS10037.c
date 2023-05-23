#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
   int n,*a,p=2,q=2000,i,j,s=0,k=0;
   scanf("%d",&n);
   a=(int *)malloc(n*4);
   srand(time(0));
   for(i=0;i<n;i++)
   {
       a[i]=p+rand()%q;
   }
   printf("%d number array",n);
   for(i=0;i<n;i++)
   {
       printf("%d,",a[i]);
   }
   for(i=0;i<n;i++)
   {
       for(j=1;j<a[i];j++)
       {
           if(a[i]%j==0){s=s+j;}
       }
       if(s==a[i]){printf("%d ",a[i]);k=k+1;}
   }
   if(k>1){printf("are perfect numbers");}
   else printf("\n no perfect numbers");
}