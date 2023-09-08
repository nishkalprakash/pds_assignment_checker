//Rollno:<23MT30010>
//Name:<Purva Harde>
#include<stdio.h>
int main()
{
  int x, maxx=0;
  for(i= 0 ; i<20; i++)
    {
      x =  (rand() % 100)+1;
printf("%d", x);
if(x>maxx)
maxx=x;
}
{
printf("%d", maxx);
}
return 0;
}