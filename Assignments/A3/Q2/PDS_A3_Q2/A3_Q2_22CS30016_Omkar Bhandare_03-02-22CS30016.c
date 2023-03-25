#include<stdio.h>
int main()
{
   int a,b,c,d,e;
   printf("Enter any two numbers from [-999,999] : ");
   scanf("%d%d", &a,&b);

   if(a>999 || b>999 || a<-999 || b<-999)
   {
       printf("You have entered numbers out of range \n");
   }
   else if (a/100==0 && b/100==0)
   {
       c = a%10;
       d = a/10;
       if((c==b/10)&&(d==b%10))
       {
           printf("Perfect Pair\n");
       }
       else
       {
           printf("Not a Perfect Pair\n");
       }
   }

   else if(a/100!=0 && b/100!=0 && a/1000==0 && b/1000==0)
   {
       c = a%10;
       d = (a/10)%10;
       e = a/100;
       if((c==b/100) && (d = (b/10)%10) && (e = b%10))
       {
           printf("Perfect Pair\n");
       }
       else
       {
           printf("Not a Perfect Pair\n");
       }
   }

   else
   {
       printf("Wrong Input\n");
   }
   return 0;
}
