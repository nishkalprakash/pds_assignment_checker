#include<stdio.h>
int main()
//reading n elements and storing them in a size of array N//
{
       int i,j=0,n,N=100,k;
       int arr[N];
       printf("how many elements you want to read");
       scanf("%d",&n);
       arr[n]=0;
       if(n>N)
       printf("error %d>%d",n,N);
       else {
       
       for(i=0;i<n;++i)
       {scanf("%d",&arr[i]);}
             for(i=0;i<n;i++)
               {for(j=n-1;j>=0;--j)
               if (arr[i]==arr[j])
               printf("%d",arr[i]);
               }
       }
       return 0;
}
