#include<stdio.h>
int main()
{
   int a=1,b=-1,i=3,n,k;
   printf("enter n");
   scanf("%d",&n);
   if (n<=0)
   {
    printf("n is invalid\n");
   }
    else if (n==1)
        {printf("1");}
    else if (n==2)
        {printf("1,-1");}
     
    else
      {printf("1,-1");
       for(i=3;i<=n;i+=1)
         {
          k=a-b;
          a=b;
          b=k;
          printf(",%d",k);
          }
       }
     return 0;
}
       
