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

  for (int i = 0; i < n; i++) a[i] = rand() % 91 + 10;

  printf("Original Array : [");
  for (int i = 0; i < n-1; i++) printf("%d, ",a[i]);
  printf("%d]\n", a[n-1]);   

  int ex = 0; // number of exchanges
  for (int i =2; i < n; i += 2) {
    if (a[i] < a[i-2]) {
      int temp = a[i]; //swap
      a[i] = a[i-2];
      a[i-2] = temp;
      ex++;
    }
  }

  printf("Updated Array : [");
  for (int i = 0; i < n-1; i++) printf("%d, ", a[i]);
  printf("%d]\n", a[n-1]);
  printf("Number of Interchanges = %d\n", ex);
}
