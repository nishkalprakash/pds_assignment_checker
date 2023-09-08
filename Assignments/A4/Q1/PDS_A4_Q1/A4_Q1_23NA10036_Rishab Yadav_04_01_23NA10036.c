// Roll no - 23NA10036
// Rishab Yadav

#include <stdio.h>

int main(){

  int distance, time;
  int rental, fuel;
  int extraTime;
  int taxiFare = 0;

  printf("Enter the distance travelled(in km):\n");
  scanf("%d", &distance);

  printf("Enter the hours the taxi was retained:\n");
  scanf("%d", &time);

  //rental ------

  if(time < 1){
    rental = 0;
  }

  if(time >= 1 && time <= 12){
    rental = 200;
  }

  if(time > 12 && time <= 24){
    rental = 500;
  }

  if(time > 24){
    extraTime = (time - 24)/24 + 1;
    rental = 500 + 300*extraTime;
  }

  // fuel -----

  if(distance > 0 && distance <= 8){
    fuel = 20;
  }

  if(distance > 8 && distance <= 12){
    fuel = (20 * 8) + (10 * (distance - 8));
  }

  if(distance > 12 && distance <= 16){
    fuel = (20 * 8) + (10 * 4) + (8 * (distance - 12));
  }

  if(distance > 16 && distance <= 20){
    fuel = (20 * 8) + (10 * 4) + (8 * 4) + (6 * (distance - 16));
  }

  if(distance > 20){
    fuel = (20 * 8) + (10 * 4) + (8 * 4) + (6 * 4) + (distance - 20)*5;
  }

  //TOtal

  taxiFare = rental + fuel;

  printf("Your taxi fare is: %d\n", taxiFare);
  
  return 0;

}
