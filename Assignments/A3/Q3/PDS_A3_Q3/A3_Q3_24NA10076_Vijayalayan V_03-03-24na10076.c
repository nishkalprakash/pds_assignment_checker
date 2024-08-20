#include<stdio.h>
int main()
{
   int a,b,c,d;
   printf("enter a,b,c,d");
   scanf("%d%d%d%d",&a,&b,&c,&d);
   if ((a!=b)&&(b!=c)&&(c!=d)&&(d!=b)&&(d!=a)&&(a!=c))
      {
      printf("no");
      }
   else if ((a==b)&&(b==c)&&(c==d)&&(d==b)&&(d==a)&&(a==c))
     {
     printf("no");
     } 
   else if  (((a==b)&&(b==c))||((c==d)&&(d==b))||((d==a)&&(a==c))||((a==b)&&(b==d)))
          {
          printf("no");
          }
   else printf("yes");
   return 0;
}
   
