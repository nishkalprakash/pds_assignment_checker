//Roll No.: 23CE10045
//Name: PRIYANSHU VERMA

#include <stdio.h>
#include <stdlib.h>
int main ()
{
  int dist,time,sum=20;
  printf("Enter total no of Kms travelled: ");
  scanf("%d", &dist);
  printf("Enter total no hours for which taxi was retained: ");
  scanf("%d", &time);
  if(dist<8)
    {
      sum = 20;
    }
  else if ((dist<12) && (dist>8))
    {
      sum = sum + (dist-8)*10;
    }
  else if ((dist<16) && (dist>12))
    {
      sum = sum + 40 + (dist-12)*8;
    }
  else if ((dist<20) && (dist>16))
    {
      sum = sum + 40 + 32 + (dist-16)*6;
    }
  else if (dist>20)
    {
      sum = sum + 40 + 32 + 24 + (dist-20)*5;
    }
  if (time<1)
    {
      sum = sum;
    }
  else if ((time<12) && (time>1))
    {
      sum = sum + 200*time;
    }
      else if ((time<24) && (time>12))
    {
      sum = sum + 12*200 + (24-time)*300;
    }
      else if (time>24)
    {
      sum = sum + 12*200 + 12*300 + time/24*300;
    }
  printf("Sum: %d",sum);
  return 0;
  
}
