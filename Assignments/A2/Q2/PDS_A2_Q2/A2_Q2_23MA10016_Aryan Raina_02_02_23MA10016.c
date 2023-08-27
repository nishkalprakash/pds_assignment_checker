//Roll No.: 23MA10016
//Name: Aryan Raina

#include <stdio.h>

int main(){
  int months;
  printf("Enter the age in months: ");
  scanf("%d", &months);

  int yr = (months + 11)/12; //acts like the ceil function

  printf("The person is %d years old\n", yr);

  return 0;
}
