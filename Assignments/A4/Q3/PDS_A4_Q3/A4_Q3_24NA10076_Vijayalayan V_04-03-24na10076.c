#include<stdio.h>
int main()
{
  int n,i=1,h=1,l,k=2,f;
  printf("no of rows you want n\n");
  scanf("%d",&n);
  for(i=1;i<=n;i+=1)
     { k=2;
       f=i;
       for(h=1;h<=(n-i);h+=1)
          {
           printf(" ");
           }
       for(l=1;l<=((2*i)-1);l+=1)
          {;
           if (l<=i)
             {
             if (l>9)
             {
              printf("%d",(f%10));
              }
              else
              {
              printf("%d",f);
              }}
            else if (l>i)
              {
               if ((f-k)>9)
               {
                printf("%d",((f-k)%10));
                k=k+2;
                }
               else
               {
               printf("%d",f-k);
               k=k+2;
               }
               }
            f+=1;
            }
         printf("\n");
        }
  return 0;
 }             
