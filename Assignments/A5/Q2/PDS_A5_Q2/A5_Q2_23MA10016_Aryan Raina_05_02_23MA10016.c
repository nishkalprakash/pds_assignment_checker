//Roll No.: 23MA10016
//Name: Aryan Raina

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(0)); //seed for rand()

  int a[50], n;
  printf("Enter the number of random numbers to be generated : ");
  scanf("%d", &n);
  if (n > 50) {
    printf("Input shouldn't be greater than 50\n");
    return 0;
  }

  for (int i = 0; i < n; i++) a[i] = rand() % 41 + 10;

  printf("\nArray : ");
  for (int i = 0; i < n; i++) printf("%d ", a[i]);
  printf("\n");

  printf("Triplets that add up to 60 are as follows : \n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      for (int k = 0; k < j; k++) {
	if (a[i] + a[j] + a[k] == 60) {
	  printf("(Indices : %d, %d, %d), ", i, j, k);
	  printf("(Values : %d, %d, %d)\n", a[i], a[j], a[k]);
	}
      }
    }
  }
}
