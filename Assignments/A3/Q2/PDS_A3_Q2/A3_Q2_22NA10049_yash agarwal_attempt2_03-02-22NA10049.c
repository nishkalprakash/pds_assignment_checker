//22NA10049
#include <stdio.h>

int main()
{
int a,b,rev,x,y,z,t;
scanf("%d%d",&a,&b);
t=a;

   x=t%10;  //extracting each digit in seperat variables
   t=t/10;
   y=t%10;
   t=t/10;
   z=t;

   rev=x*100+y*10+z; //forming the reverse digit

   if(a*a<10000)  //checking if digit less than 100
     {
      rev=x*10+y;
     }




   if((a*a>10000&&b*b<10000)||(a*a<10000&&b*b>10000)||(a*a>100&&b*b<100)||(a*a<100&&b*b>100)||(a*a>1000000||b*b>1000000)) //condition for wrong input
   {
       printf("Wrong input");

   }
   else
   {
      if(b==rev)  //comparing the reverse and the 2nd digit
        printf("perfect pair");
      else
        printf("not a perfect pair");
   }


}
