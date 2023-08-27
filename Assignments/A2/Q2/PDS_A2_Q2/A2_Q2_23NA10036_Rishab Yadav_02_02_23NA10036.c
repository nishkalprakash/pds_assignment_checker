//Roll number 23NA10036
#include <stdio.h>

int main(){

  int ageMonth;
  int ageYear;
  
  printf("Please enter your age in months: \n");
  scanf("%d", &ageMonth);

  ageYear = ageMonth / 12;

  if(ageMonth % 12 == 0){
    printf("You are %d years old.\n", ageYear);
  }
  else{
    printf("You are %d years old.\n", ageYear + 1);
  }
  


  return 0;
}
