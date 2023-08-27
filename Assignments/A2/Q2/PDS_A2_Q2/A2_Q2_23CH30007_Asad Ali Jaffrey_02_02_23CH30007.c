#include<stdio.h>

int main() {
  int months,years;
  printf("Enter your age in months\n");
  scanf("%d",&months);
  years = (months/12)+1;
  printf("The person is %d years old\n",years);
  return 0;
}
  
