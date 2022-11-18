/*name: Birru Lavanya
roll no.: 21HS10018*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{ srand(time(0));
int num1 = (rand() % (1000 - 5 + 1)) + 5;
int num2 = (rand() % (1000 - 5 + 1)) + 5;
int n1,n2,b1,b2,n,m,k,l,i,sum1=0,sum2=0;
for (i = 1; i < 4; i++)
{

   if ((num1>5&&num1<9)&&(num2>5&&num2<9))
   {
       if (num1>num2)
       {
           n1=num1;
           n2=num2;
           b1=1,b2=0;
           printf("%d %d %d %d",num1,num2,n1,n2);
            printf("A badge is %d B badge is %d",b1,b2);

       }
        else{b1=1,b2=0;
    printf("A badge is %d B badge is %d",b1,b2);
   }

   }
   if((num1>9&&num1<99)&&(num2>9&&num2<99)){
       n=num1%10;
       m=num1/10;
       n1=m+n,
        n=num2%10;
       m=num2/10;
       n2=m+n;
       printf("%d %d %d %d",num1,num2,n1,n2);
   if (n1<n2)
   {b1=0,b2=1;
    printf("A badge is %d B badge is %d",b1,b2);
   }
   else{b1=1,b2=0;
    printf("A badge is %d B badge is %d",b1,b2);
   }}
    if((num1>99&&num1<1000)&&(num2>99&&num2<1000)){
       n=num1%100;
       m=num1%10;
       k=n-m;
       l=num1/100;
       n1=m+k+l;
        n=num2%1002
       m=num2%10;
       k=n-m;
       l=num2/100;
       n2=m+k+l;

       printf("%d %d %d %d",num1,num2,n1,n2);
   if (n1<n2)
   {b1=0,b2=1;
    printf("A badge is %d B badge is %d",b1,b2);
   }
   else{b1=1,b2=0;
    printf("A badge is %d B badge is %d",b1,b2);
   }}
   else{
       if ((num1>5&&num1<10)&&(num2>9&&num2<100))
       {
           n1=1,n2=2;
           b1=0,b2=1;
    printf("A badge is %d B badge is %d",b1,b2);
       }
        if ((num1>5&&num1<10)&&(num2>99&&num2<1000))
       {
           n1=1,n2=3;
           b1=0,b2=1;
    printf("A badge is %d B badge is %d",b1,b2);
       }
        if ((num1>9&&num1<100)&&(num2>5&&num2<10))
       {
           n1=2,n2=1;
           b1=1,b2=0;
    printf("A badge is %d B badge is %d",b1,b2);
       }
      if((num1>9&&num1<100)&&(num2>99&&num2<1000))
       {
           n1=2,n2=3;
           b1=1,b2=0;
    printf("A badge is %d B badge is %d",b1,b2);
       }
       if ((num1>99&&num1<1000)&&(num2>5&&num2<10))
       {
           n1=3,n2=1;
           b1=1,b2=0;
    printf("A badge is %d B badge is %d",b1,b2);
       }
       if ((num1>99&&num1<1000)&&(num2>9&&num2<100))
       {
           n1=3,n2=2;
           b1=1,b2=0;
    printf("A badge is %d B badge is %d",b1,b2);
       }
   }
   sum1=sum1+n1;
   sum2=sum2+n2;}
   if (n1>n2)
   {
       printf("A won.... a points=%d,b points=%d",sum1,sum2);
   }
   else
    {printf("A won.... a points=%d,b points=%d",sum1,sum2)};
return(0);
}
