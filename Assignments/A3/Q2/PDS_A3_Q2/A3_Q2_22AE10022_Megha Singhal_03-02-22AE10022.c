#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e,a1,b1,c1,d1,e1;
    printf("Enter two integers");
    scanf("%d%d",&a,&b);
    if(a>=100)
  {
      a1=a/100;
    b1=a/10;
    c1=b1%10;
    d1=a%10;
    c=d1*100+c1*10+a1;
    if(b==c)
        printf("Perfect pair");
     else
     printf("not a Perfect pair");
   }  else
     {
         d=a/10;
         e=a%10;
         e1=e*10+d;
         if(b=e1)
         printf("Perfect pair");
     else
     printf("not a Perfect pair");

     }
     return 0;

}
