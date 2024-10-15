#include<stdio.h>
int main()
{
  int i,temp,j,n,m,a[100];
  printf("enter input array as an integer:\n");
  scanf("%d",&n);
  printf("enter the array elements one by one\n");
  for(i=0;i<n;i++)
  {   
     scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
      for(j=0;j<n-i-1;j++)
      {  
          if(a[j]>a[j+1])
           {  
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
               
            }
       }
       
  printf("enter new element:");
  scanf("%d",&a[n]);
    for(i=0;i<n+1;i++)
      for(j=0;j<n-i;j++)
      {  
          if(a[j]>a[j+1])
           {  
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
               
            }
       }
  printf("output array:[");
  for(i=0;i<=n;i++)
  {
    printf("%d, ",a[i]);
  }
  printf("]");
  }
  
        
