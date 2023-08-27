//Roll No.: 23MA10016
//Name: Aryan Raina

#include <stdio.h>

int main(){
  float x;
  printf("Enter a number: ");
  scanf("%f", &x);
  
  int flr = x;
  float frc = x - flr;
  printf("Integral part=%d\nFractional part=%.3f\n", flr, frc);
  
  return 0;
}
