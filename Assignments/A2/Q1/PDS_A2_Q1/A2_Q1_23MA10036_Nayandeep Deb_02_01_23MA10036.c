//Roll no. 23MA10036
//Name: Nayandeep Deb

#include <stdio.h>

int main(){
  printf("Enter Number: ");
  float num = 0;
  scanf("%f", &num); //asking user for input
  int i= 0;
  while (num >= 1) //loop to shift integer part of num to i and seperate them
    {
      num--;
      i++;
    }
  printf("Integral part=%i\n",i);
  printf("Fractional part=%.3f\n",num);
  return 0;
}
