#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
  int s,smalls=100,smallnum,a,dig,x ;
  srand(time(0));
  printf("20 RANDOM NUMBERS BETWEEN 5000 AND 6000 ARE" );
  for(int i=0;i<20;i++)
 { s= 0;
  x=(rand()%1000)+5001;
   a=x ;
}
while(x>0)
{ dig=x%10;
s+=dig ;
x=x/10 ;}
printf("Number is %d and  Sum of digits is  %d\n ", a,s);
if (s<smalls)
{ smallnum=a;
smalls= s;
}
printf(" The number with the smallest digits is %d\n and the sum of digits is %d\n", smallnum,smalls);
  return 0 ;
}
