//Roll No.: 23CS30029
//Name: Kshetrimayum Abo

#include<stdio.h>
int main()
{
  int dist, renttime, distfare, rentfare;
  printf("Enter the total number of Kilometers travelled : ");
  scanf("%d",&dist);
  printf("Enter the total hours the taxi has been retained : ");
  scanf("%d",&renttime);
  //Fare calculation for distance
  if (dist <= 8)
    distfare = 20;
  else if( dist <= 12)
    distfare = 20 + (dist-8)*10;
  else if(dist <= 16)
    distfare = 20 + 40 + (dist-12)*8;
  else if(dist <= 20)
    distfare = 20 + 40 + 32 + (dist-16)*6;
  else
    distfare = 20 + 40 + 32 + 24 + (dist - 20)*5;

  //Fare calculation for rent time
  if (renttime > 1 && renttime < 12)
    rentfare = 200;
  else if (renttime >= 12 && renttime <= 24)
    rentfare = 500;
  else
    {
      if ((renttime - 24)%24==0)
	rentfare = 500 + 300*((renttime-24)/24);
      else
	rentfare = 500 + 300*((renttime-24)/24 + 1);
    }
     
  printf("The total taxi fare is %d\n",rentfare+distfare);
  return 0;
}
