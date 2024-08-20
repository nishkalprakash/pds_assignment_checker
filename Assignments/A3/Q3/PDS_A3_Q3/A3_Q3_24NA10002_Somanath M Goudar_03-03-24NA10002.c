#include <stdio.h>
int main()
{
     int a, b, c, d;
     scanf("%d, %d, %d, %d", &a,&b,&c,&d);
     if(a==b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d){
     printf("YES");
     }
     if (a!=b&&a==c&&a!=d&&b!=c&&b!=d&&c!=d);{
     printf("YES");
     }
     if(a!=b&&a!=c&&a==d&&b!=c&&b!=d&&c!=d);{
     printf("YES");
     }
     if(a!=b&&a!=c&&a!=d&&b==c&&b!=d&&c!=d);{
     printf("YES")
     }
     if(a!=b&&a!=c&&a!=d&&b!=c&&b==d&&c!=d);{
     printf("YES")
     }
     if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c==d);{
     printf("YES")
     }
     else {
     printf("NO");
     }
     return 0;
     }
     
