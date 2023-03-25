#include<stdio.h>
#include<math.h>
int main(){
int a, b;
int d1,d2;

int n0, n1, n2, p;
int m0, m1, m2, q;

int t0,t1;
int r0,r1;

printf("Enter two numbers in the range [-999,999]\n");
scanf("%d", &a);
scanf("%d", &b);
d1=log10(a)+1;
d2=log10(b)+1;
if(a<0 && b>0)
{
    printf("Not a perfect pair\n");
}
else if(b<0 && a>0)
{

    printf("Not a perfect pair\n");
}
else if(d1==d2 && d1==3)

{
   n0 = a%10;
   p = a%100 - n0;
   n2 = p/10;
   n2 = a - (a%100);

   m0 = b%10;
   q = b%100 - m0;
   m1 = q/10;
   m2 = b - (b%100);

    if(m0==n0)
  {
      if(m1==n1)
      {
        if(m2==n2)
         {
           printf("Perfect Pair");
        }
    }
   }
}
else if(d1==d2 && d1==2)
{
    t0 = a%10;
    t1 = a-t0;
    r1= a%10;
    r1 = b-t0;
    if(t1==r1)
      {
        if(t0==r0)
         {
           printf("Perfect Pair");
        }
    }
}
else
{
    printf("Wrong Input");
}
return 0;
}
