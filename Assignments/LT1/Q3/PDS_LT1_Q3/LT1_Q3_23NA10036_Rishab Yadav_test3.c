// Rishab Yadav
// Roll no - 23NA10036
// Set - 1
// Question - 3

#include <stdio.h>

int main(){

  int s; //scale factor
  int n; //no of lines

  printf("Enter the value of scale-factor(s) between [1,6]:\n");
  scanf("%d", &s);

  printf("Enter the value of number of lines(n) between [1,10]:\n");
  scanf("%d", &n);

  if((s < 1 || s > 6) || (n < 1 || n > 10)){
    printf("Invalid input!\n");  // Checks input
    return 0;
  }

  for(int j = 1; j <= n; j++){
    for(int i = 1; i <= (s + 3); i++){
      printf("%d ", i);
      if(i == j){
	printf("\n");
      }
    }
  }
  
  return 0;
}
