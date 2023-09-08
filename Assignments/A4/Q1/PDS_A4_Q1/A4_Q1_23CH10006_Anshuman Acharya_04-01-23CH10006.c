//Name-Anshuman Acharya
//Roll No-23CH10006
#include<stdio.h>

int main()
{
  int dist,time,n,fare;
  printf("Enter the distance in km: ");
  scanf("%d",&dist);
  printf("Enter the time in hour: ");
  scanf("%d", &time);
  n = time/24;
  if(time<1 && time>=0)
    {
      printf("Taxi fare = 0 considering time only");
    }
  if(time>1 && time<=12)
    {
      printf("Taxi fare = 200 considering time only\n");
    }
  if(time>12 && time<24)
    {
      printf("Taxi fare = 500 considering time only\n");
    }
  if(time > 24)
    {
      printf("Taxi fare = %d considering time only\n",500+300*n);
    }
  if(dist<8)
    {
      fare = 20;
    }
  else if(dist<12)
    {
      fare = 30;
    }
  else if(dist<16)
    {
      fare = 38;
    }
  else if(dist<20)
    {
      fare = 44;
    }
  else if(dist>20)
    {
      fare = 44 + 5*(dist-20);
    }
  printf("Your total fare = %d",500 + 300*n + fare);
  return 0;
}
    
 
