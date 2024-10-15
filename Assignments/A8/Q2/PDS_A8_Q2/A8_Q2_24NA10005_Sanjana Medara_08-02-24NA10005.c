#include<stdio.h>
int main()
int bubble_sort(int a[],int n)
 {
   int b;
   if(n>=0&&n<=100)
   {
   scanf("%d",&n);
   printf("n=%d",n);
   }
   for (int i=0;i<=n;i++);
    {
      scanf("%d",&a[i]);
      printf("A[n]=%d",a[i]);
      for( int j=0;j<n-i-1;j++)
      {
        if(a[j]>a[j+1])
        {
         b=a[j];
         a[j]=a[j+1];
         a[j+1]=b;
        }
       }
      } 
    int linear_search(int m,int p)
    {    
    scanf("%d",&m);
    printf("m=%d",m);
    if(m<n&&p!=a[m])
    {
    m++;
    }
    }
    printf("output array:%d"b);
    return b;
    }
    
       
