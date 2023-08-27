//Roll no.: 23IM30025
//NAME : Shreyash Girdhari Dhakate
#include<stdio.h>
int main() {
  int a;//defining a as integer
  printf("Enter Your Age In Months:");//user input
  scanf("%d",&a);
  int b;
  b=a/12;
  //conditions
  if (a%12==0){
    printf("You Are  %d Years Old\n",b);
  }
  else{
    printf("You Are %d Years Old \n",b+1);
  }
  return 0;
}
