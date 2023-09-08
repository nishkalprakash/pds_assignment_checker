//Roll No.: 23MA10016
//Name: Aryan Raina

#include <stdio.h>
#include <stdlib.h>

int main() {
  int mx = 0;

  printf("Generating 20 random numbers between 1 and 100...\n");
  for (int i = 0; i < 20; i++) {
    int x = rand() % 100 + 1;
    printf("%d\n", x);
    if (x > mx) mx = x;
  }

  printf("The maximum number that was generated = %d\n", mx);
}
