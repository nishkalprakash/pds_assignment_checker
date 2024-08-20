#include <stdio.h>
int main()
{
  int a,b,c,d;
  scanf("%d %d %d %d",&a,&b,&c,&d);
  if (a==b && a!=c && a!=d && b!=c && b!=d && c!=d){
     printf("YES");
     }
     else {
     printf("NO");
     }
     
    if (a==c && a!=b && a!=d && b!=c && b!=d && c!=d){
    printf("YES");
    }
    else {
     printf("NO");
     }
    if (a==d && a!=b && a!=c && b!=c && b!=d && c!=d){
    printf("YES")
    }
    else {
     printf("NO");
     }
     
    if (b==c && a!=b && a!=c && a!=d && b!=d && c!=d){
    printf("YES")
    }
    else {
     printf("NO");
     }
    if (b==d && a!=b && a!=c && a!=d && b!=c&& c!=d){
    printf("YES")
    } 
    else {
     printf("NO");
     }
    if (c==d && a!=b && a!=c && a!=d && b!=c&& b!=d){
    printf("YES")
    }
      
     else {
     printf("NO");
     }
     return 0;
     }1
