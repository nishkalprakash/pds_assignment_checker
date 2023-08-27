//Roll No. : 23EE10036
//Name : Kushagra Poonia

#include <stdio.h>

int main(){
  int years = 0;
  int months = 0;

  printf("Enter the person\'s age.\n");
  scanf("%d", &months);
  if(months%12 != 0){
    years = (months/12) + 1;
  }
  else{
    years = (months/12);
  }

  printf("The person is %d years old.\n", years);
}
