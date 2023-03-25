#include<stdio.h>

int main()
{

   int a,b,c,d,e,max,larg,n=0,n1,n2,n3;
   printf("Enter any five int numbers:");//asks for input
   scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);//storing input
   if(a%2==1)
       n++;
   if(b%2==1)
    n++;
   if(c%2==1)
    n++;
   if(d%2==1)
    n++;
   if(e%2==1)
    n++;
   if(n==3)//condition
   {
       printf("there are three odd numbers\n");
   }else if(n==2)
   {
       printf("there are three even numbers\n");
   }
   if(n==3)
   {
       if(a%2==1 && b%2==1 && c%2==1)
       {
           n1=a;
           n2=b;
           n3=c;
       }
       if(a%2==1 && b%2==1 && d%2==1)
       {
           n1=a;
           n2=b;
           n3=d;
       }
       if(a%2==1 && b%2==1 && e%2==1)
       {
           n1=a;
           n2=b;
           n3=e;
       }if(a%2==1 && c%2==1 && e%2==1)
       {
           n1=a;
           n2=c;
           n3=e;
       }
       if(a%2==1 && c%2==1 && d%2==1)
       {
           n1=a;
           n2=c;
           n3=d;
       }
       if(b%2==1 && c%2==1 && d%2==1)
       {
           n1=b;
           n2=c;
           n3=d;
       }
       if(b%2==1 && c%2==1 && e%2==1)
       {
           n1=b;
           n2=c;
           n3=e;
       }
       if(a%2==1 && d%2==1 && e%2==1)
       {
           n1=a;
           n2=d;
           n3=e;
       }
       if(b%2==1 && e%2==1 && d%2==1)
       {
           n1=b;
           n2=e;
           n3=d;
       }
       if(c%2==1 && e%2==1 && d%2==1)
       {
           n1=c;
           n2=e;
           n3=d;
       }
       if(n1>n2 && n1>n3)
       {
           if(n2>n3)
           {
           printf("smallest three odd numbers:%d %d %d",n3,n2,n1);
           }else
           {
               printf("smallest three odd numbers:%d %d %d",n2,n3,n1);
           }
       }
       if(n2>n1 && n2>n3)
       {
        if(n1>n3)
           {
           printf("smallest three odd numbers:%d %d %d",n3,n1,n2);
           }else
           {
               printf("smallest three odd numbers:%d %d %d",n1,n3,n2);
           }
       }
       if(n3>n1 && n3>n2)
       {
        if(n1>n2)
           {
           printf("smallest three odd numbers:%d %d %d",n2,n1,n3);
           }else
           {
               printf("smallest three odd numbers:%d %d %d",n1,n2,n3);
           }
       }
   }
   if(n==2)
   {
       max=a;
       if(b>max)
        max=b;
       if(c>max)
        max=c;
       if(d>max)
       max=d;
       if(e>max)
       max=e;
       printf("Largest number is %d",max);
   }

   return 0;
}
