// Roll number - 23NA10036
//Rishab Yadav

#include <stdio.h>

int main(){
  
  int n, sum = 0;
  int SecMax = 0, Max = 0;

  printf("Enter an integer:\n");
  scanf("%d", &n);

  while(n>0){
    sum = sum + n%10;
    n = n/10;
    if(n%10 > Max){
      Max = n%10;
    }
    if(n%10 > SecMax && n%10 < Max){
      SecMax = n%10;
    }
  }
  printf("Sum - %d\n", sum);
  printf("Largest Number - %d\n", Max);
  printf("Second Largest Number - %d\n", SecMax);
  

  return 0;
}
