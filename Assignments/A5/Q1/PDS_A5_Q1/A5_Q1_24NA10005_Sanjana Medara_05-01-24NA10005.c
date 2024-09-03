#include <stdio.h>
#define N (100)
int main()
  {
    int a[100];
    int n;
    scanf("%d",&n);
    if(n<=N)
    {
      for(int j=0;j<=a;j++)
      scanf("%d",&j);
      printf("Original array:%d",j);
       {
       if(j<0)
       printf("Rearranged array:%d",j);
       else if(j>0)
       printf("%d",j);
       else
       printf("");
       }
     }
    else
     printf("Error: n>100");
    return 0;
   }
      
