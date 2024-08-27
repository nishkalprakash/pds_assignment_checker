#include <stdio.h>
int main()
  {
     int d,m,y;
     scanf("%d %d %d",&d ,&m ,&y);
     if(d<=31,m<=12,y<=2024)
     {
     printf("valid data");
     }
     else if(d<=28,m==2,y<=2024)
     {
     printf("valid data");
     }
     else if(d==29,m==2,y<=2024)
     {
     printf("valid data");
     }
     else
     {
     printf("invalid data");
     }
     return 0;
  }
   
