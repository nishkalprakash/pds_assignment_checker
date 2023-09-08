//Roll No.: 23MA10016
//Name: Aryan Raina

#include <stdio.h>

int main() {
  int km, hr;
  printf("Enter the total number of kilometers travelled : ");
  scanf("%d", &km);
  printf("Enter the hours the taxi was retained : ");
  scanf("%d", &hr);

  int fare = 20;
  
  for (;km > 8; km--) {
    if (km > 20) fare += 5;
    else if (km > 16) fare += 6;
    else if (km > 12) fare += 8;
    else fare += 10;
  }

  if (hr >= 1) fare += 200;
  if (hr >= 12) fare += 300;
  if (hr >= 24) fare += 300 * (hr/24);

  printf("Taxi Fare = %d\n", fare);
}
