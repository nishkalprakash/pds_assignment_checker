//Roll No:<23MT30010>
//Name:<Purva Harde>
//Set:<2>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int n;
    int count[10] = {0};
    int totalNumbers;
    srand(time(NULL));
    printf("Enter the number of random numbers to generate: ");
    scanf("%d", &n);
      if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
   }
    printf("Generated random numbers:\n");
    for (int i = 0; i < n; i++) {
        int randomNumber = rand() % 100;
        printf("%d ", randomNumber);
        count[randomNumber / 10]++;
    }
      printf("\n");
    printf("Percentage of numbers in each range:\n");
    for (int i = 0; i < 10; i++) {
        float percentage = (float)count[i] / n * 100;
        printf("%d-%d: %.1f%%\n", i * 10, i * 10 + 9, percentage);
    }
      return 0;
}