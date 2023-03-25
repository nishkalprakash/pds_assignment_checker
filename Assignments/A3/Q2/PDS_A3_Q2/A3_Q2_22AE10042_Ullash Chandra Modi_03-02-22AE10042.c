#include <stdio.h>
#include <math.h>
int main()
{
   int a,b,c=0,d,e,f;
   printf("enter two numbers :");
   scanf("%d %d",&e,&b);


   f=abs(e);
   if (e!=f)
   {a=(-e);}
   else{a=e;}
   while (a>0)
   {
        d=a%10;
        c=(c*10)+d;
        a=a/10;
   }

   if (e!=f)
   {
        if ((-c)==b){printf("\nperfect pair");}
        else {printf("\nNot a perfect pair");}
   }
   else
   {
        if (c==b){printf("\nperfect pair");}
        else {printf("\nWrong input");}
   }

}
