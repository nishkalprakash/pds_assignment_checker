#include<stdio.h>
  int main()
{
    int n;
   int a[n];
   scanf("%d", &n);
 	 for (int k=0; k<n; k++)
 	 {
   	scanf("%d", &a[k]);
          }
 for(int i=0;i<n-1;i++)
      {
         for(int j=i+1;j<n;j++)
            {
                   if (a[j]>a[i])
                       printf("%d",a[j]);  

               }


       }




   return 0;
}
