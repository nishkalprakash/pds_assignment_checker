#include<stdio.h>
int main()
{
   int n1,n2;
   printf("enter first number:");
   scanf("%d",&n1);
   printf("enter second number:");
   scanf("%d",&n2);
   if ((n1>100)&&(n1<999)&&(n2>100)&&(n2<999)){

      printf("both numbers are three digit positive\n");
      int a=n1/100,b=n2/100;
      int c=((n1%100)-(n1%10));
      int d=((n2%100)-(n2%10));
      if ((a==n2%10)&&(b==n1%10)&&(c==d)) printf("Perfect pair");
      else printf("Not a perfect pair");
}
   else if ((n1>10)&&(n1<99)&&(n2>10)&&(n2<99)){
      printf("both numbers are two digit positive\n");
      int a=n1%10,b=n2/10,c=n1/10,d=n2%10;
      if ((a==b)&&(c==d)) printf("Perfect pair");
      else printf("Not a perfect pair");
   }
   else if ((n1>0)&&(n1<10)&&(n2>0)&&(n2<10)) {
    printf("both numbers are single digit positive\n");
    if (n1==n2) printf("Perfect pair");
    else printf("Not a perfect pair");
   }
   else if ((n1>-1000)&&(n1<-100)&&(n2>-1000)&&(n2<-100)){

      printf("both numbers are three digit negative\n");
      int a=n1/100,b=n2/100;
      int c=((n1%100)-(n1%10));
      int d=((n2%100)-(n2%10));
      if ((a==n2%10)&&(b==n1%10)&&(c==d)) printf("Perfect pair");
      else printf("Not a perfect pair");
   }
   else if ((n1>-100)&&(n1<-9)&&(n2>-100)&&(n2<-9)){
      printf("both numbers are two digit negative\n");
      int a=n1%10,b=n2/10,c=n1/10,d=n2%10;
      if ((a==b)&&(c==d)) printf("Perfect pair");
      else printf("Not a perfect pair");
   }
   else if ((n1>-10)&&(n1<0)&&(n2>-10)&&(n2<0)) {
    printf("both numbers are single digit negative\n");
    if (n1==n2) printf("Perfect pair");
    else printf("Not a perfect pair");
   }
   else printf("wrong input");

}
