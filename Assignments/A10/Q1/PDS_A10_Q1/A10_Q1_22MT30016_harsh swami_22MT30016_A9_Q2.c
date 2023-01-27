#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef struct{
  int d;
  int m;
  int y;
}date;
void readdate(date *x)
{
    printf("enter date:");
    scanf("%d %d %d",&x->d,&x->m,&x->y);
}
void printdate(date x)
{
   printf(":%d/%d/%d\n",x.d,x.m,x.y);
}
 int findDays(date a, date b)
{ int yeard;
   int monthd;
   int dayd;
  int months[12]={31,28,31,30,31,30,31,30,31,30,31,30};
  yeard=365*(a.y-b.y);
  dayd=(a.d-b.d);
  monthd=30.5*(a.m-b.m);
  int leapyears=abs(a.y-b.y)/4;
  int numberofdays=abs(yeard+dayd+monthd);
  return numberofdays;
}

 
int main()
{
   date a,b;
   readdate(&a);
   readdate(&b);
   printf("X:");
   printdate(a);
   printf("Y:");
   printdate(b);
 
int numberofdays=findDays(a,b);
printf("days:%d\n",numberofdays);
return 0;
}

