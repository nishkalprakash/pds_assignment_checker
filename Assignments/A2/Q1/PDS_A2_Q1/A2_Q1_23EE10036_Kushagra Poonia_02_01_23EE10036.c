//Roll no. : 23EE10036
//Name : Kushagra Poonia


#include <stdio.h>

int main(){
  float num = 0;
  int integer = 0;
  float fraction = 0;

  printf("Enter the number.:\n");
  scanf("%f", &num);

  
  integer = num;
  fraction = num-integer;

  printf("Integral Part= %d\n Fractional Part = %f\n", integer, fraction);

}
