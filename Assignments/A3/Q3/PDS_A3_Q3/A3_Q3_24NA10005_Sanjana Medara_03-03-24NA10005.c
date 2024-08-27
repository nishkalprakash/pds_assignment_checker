#include <stdio.h>
int main()
   {
     int a,b,c,d;
     scanf("%d",&a);
     printf("a=%d",a);
     scanf("%d",&b);
     printf("b=%d",b);
     scanf("%d",&c);
     printf("c=%d",c);
     scanf("%d",&d);
     printf("d=%d",d);
     if(a==b)
     printf("yes");
     else if(b==c)
     printf("yes");
     else if(c==d)
     printf("yes");
     else if(d==a)
     printf("yes");
     else
     printf("NO");
     return 0;
   }
