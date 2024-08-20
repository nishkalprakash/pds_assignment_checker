#include<stdio.h>
int main()
{
int a,b,c,d;
printf("Enter four integers\n");
scanf("%d%d%d%d",&a,&b,&c,&d);
if (a==b||b==c||c==d||d==a||a==c||b==d) {
   printf("YES\n");
   }
   else {
   printf("NO\n");
   }
   return 0;
   }
