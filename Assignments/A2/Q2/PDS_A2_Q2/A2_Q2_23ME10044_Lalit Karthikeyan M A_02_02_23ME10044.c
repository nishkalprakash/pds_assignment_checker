//Roll NO.: 23ME10044
//Name: Lalit Karthikyan M A
#include <stdio.h>
int main(){
  int months;
  printf("Enter your age in months: ");
  scanf("%d", &months);
  printf ("The Person is %d years old.", (months%12 ==0)?(months/12):(months/12)+1);
  return 0;
}
  
