//Roll No.: 23MA10016
//Name: Aryan Raina

#include <stdio.h>

int main() {
  int x;
  printf("Enter an integer value : ");
  scanf("%d", &x);
  
  int slar = 0, lar = 0, sum = 0;
  while (x) {
    int dig = x % 10;
    sum += dig;
    if (dig > lar) {
      slar = lar; lar = dig;
    }
    if (dig > slar && dig < lar) slar = dig;
    x /= 10;
  }

  printf("Sum of digits = %d\n", sum);
  printf("Largest Digit = %d\n", lar);
  printf("Second Largest Digit = %d\n", slar);
}
