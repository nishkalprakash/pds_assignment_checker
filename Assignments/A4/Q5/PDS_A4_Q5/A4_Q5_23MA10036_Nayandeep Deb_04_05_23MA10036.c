//Roll no. 23MA10036
//Name: Nayandeep Deb

#include <stdio.h>

int main() {
  int num, sum = 0, max = 0, sec = 0, th = 0;
  printf("Enter a number: ");
  scanf("%d", &num);
  max = num % 10;
  sum += num % 10;
  num /= 10;
  while (num > 0) {
    th = num % 10;
    sum += num % 10;
    num /= 10;
    if (th > max){
      sec = max;
      max = th;
    }
    else if (th == max);
    else if (th > sec) sec = th;
  }
  printf("Sum of digits = %d \n Largest = %d  Second Largest = %d\n", sum, max, sec);
  return 0;
}
