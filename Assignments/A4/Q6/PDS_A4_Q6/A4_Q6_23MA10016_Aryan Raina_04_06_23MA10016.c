//Roll No.: 23MA10016
//Name: Aryan Raina

#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("Generating 20 random integers between 5000 and 6000...\n");

  int num, mnsum = 1e9+7;
  for (int i = 0; i < 20; i++) {
    int x = rand() % 1001 + 5000, sumdig = 0;
    for (int i = x; i; i/=10) sumdig += i % 10;

    if (sumdig < mnsum) {
      mnsum = sumdig;
      num = x;
    }

    printf("Number = %d, Sum of Digits = %d\n", x, sumdig); 
  }

  printf("The number having smallest sum of digits is %d\n", num);
}
