#include <stdio.h>

// Roll No. 23IE10031
// Name- Om Singh Jadon

int main()
{
  int dist, hours;
  printf("Total Kilometers Travelled and The Hours for which the Taxi was retained: ");
  scanf("%d %d", &dist, &hours);
  int rental_fee;
  if (hours<1) rental_fee=0;
  else if (hours < 12) rental_fee=200;
  else if (hours < 24) rental_fee=500;
  else if (hours >= 24)
    {
      float days = hours/24.0;
      if (hours%24 == 0) rental_fee = 200 + (int)days*300;
      else rental_fee = 200 + ((int)days+1)*300;
    }

  int taxi_fare;
  if (dist<=8) taxi_fare = 20;
  else if (dist<=12) taxi_fare = 20 + (dist-8)*10;
  else if (dist<=16) taxi_fare = 20 +40 +(dist-12)*10;
  else if (dist<=20) taxi_fare = 20 + 40 + 32+ (dist-16)*10;
  else if (dist>20) taxi_fare = 20 + 40 + 32 + 24 + (dist-20)*5;

  printf("Total Fee is: %d\n", taxi_fare + rental_fee);
  
  
}
