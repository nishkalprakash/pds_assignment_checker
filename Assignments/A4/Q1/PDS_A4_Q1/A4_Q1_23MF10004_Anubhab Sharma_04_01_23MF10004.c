#include<stdio.h>
int main()
{
  int dist, hrs, fare_dist, fare_time;
  printf("Enter the distance travelled in kilometres: ");
  scanf("%d", &dist);
  printf("Enter the time period of hiring in hours: ");
  scanf("%d", &hrs);
  if (dist<=8)
    fare_dist = 20;
  else if (dist<=12)
    fare_dist = 30;
  else if (dist<=16)
    fare_dist = 38;
  else if (dist<=20)
    fare_dist = 44;
  else
    fare_dist = 49;
  if (hrs<1)
    fare_time = 0;
  else if (hrs>=1 && hrs<=12)
    fare_time = 200;
  else if (hrs>=12 && hrs<=24)
    fare_time = 300;
  else
    fare_time = (hrs/24)*300;

  printf("The total fare is: %d\n", fare_dist+fare_time);
}

    
  
  
  
    
