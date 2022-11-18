/*This program is to print five digit number made of only 2 digits and not divisible by it's sum*/
/*Name : Susank Chigilipalli
  Section : 3A
  Assignment class 6
  Assignment : LT3
  question : 3*/
#include<stdio.h>
void main()
{
   int i,a,b,sum,count=0,mod,n;
   printf("Enter value of a : ");
   scanf("%d",&a);
   printf("Enter value of b : ");
   scanf("%d",&b);
   sum=a+b;
   printf("Please wait foe a while :\n ");
   for(i=10000;i<=99999;i++)
   {
      n=i;
      while(n!=0)
      {
         mod=n%10;
         if(mod==a||mod==b)
         {
            count++;
         }
         n=n/10;
      }
      if(count==5)
      {
         if(i%sum!=0)
         {
            printf("%d\n",i);
         }
      }
      count=0;
   }
}
