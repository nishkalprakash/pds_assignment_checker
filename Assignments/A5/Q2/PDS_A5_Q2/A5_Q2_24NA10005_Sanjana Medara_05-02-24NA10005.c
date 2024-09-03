#include <stdio.h>
int main()
  { 
    int N[100];//declaring the array//
    int n,count;
    scanf("%d",&n);//getting value of n from user//
    if(n<=100)
    {
      for(int i=0;i<=n;i++)
      {
      scanf("%d",&N[i]);//getting array values from user//
      printf("original array:%d",N[i]);
      for(int j=i;j<=n;j++)
        {
         count++;
         for(int k=count;k<=1;k=n+1)//to check the duplicates//
         {
         if(k>1)
         printf("Duplicate:%d",N[j]);
         else
         printf("%d",N[i-j]);
         }
        }
       }
      }     
       else
       printf("Error:n>100");
       return 0;
  }
