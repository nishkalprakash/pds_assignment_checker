#include<stdio.h>
#include<math.h>
int main()
{
   int a,b,num=0;
   a>=-999&&a<=999;
   b>=-999&&b<=999;
   printf("ENTER TWO NUMBERS(num1,num2)-");
   scanf("%d%d",&a,&b);
   //if(a>100&&b<100||a<100&&b>100)
   //{
     //  printf("WRONG INPUT");
   //}
   int c1=0,c2=0;
   if(a<-999&&a>999)
   {
       printf("wrong input");
   }
   if(b<-999&&b>999)
   {
    printf("wrong input") ;
   }
   if(log10(abs(a))!=log10(abs(b)))
   {
       printf("wrong input");
   }


   /*if(a>0)
   {
       a=a/10;
       c1++;
   }
   if(a>0)
   {
       a=a/10;
       c1++;
   }
   if(a>0)
   {
       a=a/10;
       c1++;
   }
   if(b>0)
   {
       b=b/10;
       c2++;
   }
   if(b>0)
   {
       b=b/10;
       c2++;
   }
   if(b>0)
   {
       b=b/10;
       c2++;
   }
   if(c1!=c2)
   {
       printf("wrong input");
   }*/


   if(a<100&&b<100&&a%11==0)
   {
       b=a;
       printf("perfect pair");
   }
    if(a<100&&b<100&&(a+b)%11==0)
    {
        printf("perfect pair");
    }
    if(a>100&&b>100&&(a+b)%11==0)
    {
        printf("perfect pair");
    }
    int temp=a;
    if(a<0)a=-a;
    if(a>0)
    {int r1=a%10;
     num=num*10+r1;
     a=a/10;
    }
    if(a>0){
    int r1=a%10;
     num=num*10+r1;
     a=a/10;}

    if(a>0)
    {int r1=a%10;
     num=num*10+r1;
     a=a/10;}

    printf("a=%d b=%d ",temp,b,num);
     if(temp<0) num=-num;

        if(num==b)
        {
            printf("perfect pair");
     }




    else{
        printf("not a perfect pair");
    }

    return 0;
}










