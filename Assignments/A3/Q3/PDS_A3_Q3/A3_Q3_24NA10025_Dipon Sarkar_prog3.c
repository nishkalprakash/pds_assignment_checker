#include<stdio.h>
int main()
{
 int a,b,c,d;
 
 printf("a:\n b:\n c:\n d:\n");
 scanf("%d %d %d %d",&a,&b,&c,&d);
 
 if (a==b && c!=d && a!=b && a!=c)
 {
  printf("Yes");
   if (a==d && c!=b && a!=b && a!=c)
    printf("Yes");
 {
  if (a==c&& b!=d && a!=b && a!=d)
  {
  printf("Yes");
   if(c==b && a!=d && c!=b && a!=c)
   {
    printf("Yes");
    if(c==d && a!=b && c!=d && d!=c)
    {
    printf("Yes");
    if(d==b && a!=c && a!=b && b!=c)
    {
     printf("Yes");
     }
    }
   }
  }
 } 
 }
 else
 printf("No");
 getchar();
 return 0;
 }
