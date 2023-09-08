//Roll no. 23MA10036
//Name: Nayandeep Deb

#include <stdio.h>
#include <stdlib.h>

int main() {
  int max, j;
  max = (rand() % 100)+1;
  printf("%d\n", max);
  for (int i = 0; i < 19; i++){
    j = (rand() % 100)+1;
    printf("%d\n", j);
    if (j > max)  max = j;
  }
  printf("Maximum Number: %d\n", max);
  return 0;
}
