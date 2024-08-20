#include<stdio.h>
int main()
{
     int a,b,c,d;
     scanf("%d%d%d%d",&a,&b,&c,&d);
     if (a==b && b!=c && a!=c && a!=d && b!=d && c!=d)
     printf("yes");
     else if (a!=b && b==c && a!=c && a!=d && b!=d && c!=d)
     printf("yes");
     else if (a!=b && b!=c && a==c && a!=d && b!=d && c!=d)
     printf("yes");
     else if (a!=b && b!=c && a!=c && a==d && b!=d && c!=d)
     printf("yes");
     else if (a!=b && b!=c && a!=c && a!=d && b==d && c!=d)
     printf("yes");
     else if (a!=b && b!=c && a!=c && a!=d && b!=d && c==d)
     printf("yes");
     else printf("no");
     return 0;
}
