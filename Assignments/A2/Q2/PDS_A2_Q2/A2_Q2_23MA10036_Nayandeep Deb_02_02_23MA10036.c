//Roll no. 23MA10036
//Name: Nayandeep Deb

#include <stdio.h>

int main(){
  int month = 0;
  int year = 0; //two variables for holding month and year respectively
  printf("Age in months: ");
  scanf("%i",&month);
  while (month >= 12) /*a loop to convert months into years which
                            stops when months are less than 12*/
    {
      month -= 12;
      year++;
    }
  if (month != 0) {
    year++;
  }
  printf("The person is %i years old\n", year);
  return 0;
}
