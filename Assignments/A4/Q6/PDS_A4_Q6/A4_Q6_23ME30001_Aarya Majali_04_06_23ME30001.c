//23ME30001
//AARYA MAJALI

#include <stdio.h>
#include <stdlib.h>
int main()
{
 int i,x,sum=0, smallsum=0,y,n;
 for(int i=0; i<20; i++)
 {
  i=0;
  y=(rand()%1000 + 50001);
  while (y>0){
        n=x%10;
        sum=sum+n;
        x=x/10;
        }
   printf("sum of the digits is %d",sum);}
   if (sum<smallsum) smallsum=sum;
   printf("the smallest sum of numbers will be",smallsum);
return 0;
}

  
