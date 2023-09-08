// Roll number 23NA10036
// Rishab Yadav

#include <stdio.h>

int main(){

  int n, reverse = 0, copyn;

  printf("Enter the number:\n");
  scanf("%d", &n);

  copyn = n;

  while(n > 0){
    reverse = reverse * 10 + n % 10;
    n = n/10;
  }
  
  printf("Reverse - %d\n", reverse);

  if(reverse == copyn){
    printf("Number is a palindrome.\n");
  }

  else{
    printf("Number is not a palindrome.\n");
  }

  return 0;
}
