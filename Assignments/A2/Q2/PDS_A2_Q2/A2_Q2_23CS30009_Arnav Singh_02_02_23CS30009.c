//Roll no.: 23CS30009
//Name: Arnav Singh

#include <stdio.h>

int main(){
  int month, year;
  printf("Enter your age in months: ");
  scanf("%d", &month);
  year= (month/12)*12==month? month/12:month/12 + 1;  //Calculation done according to given example. If month is a multiple of 12, then answer is month/12. Else it is month/12 +1.
  printf("The person is %d years old\n", year);
  return 0;
}
