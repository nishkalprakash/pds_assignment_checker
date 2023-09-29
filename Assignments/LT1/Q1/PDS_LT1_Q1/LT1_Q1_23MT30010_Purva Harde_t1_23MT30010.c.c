//Roll No.:<23MT30010<
//Name:<Purva Harde>
//Set:<2>
#include <stdio.h>
  int main() {
    int n;
        printf("Enter an integer between 1 and 9: ");
    scanf("%d", &n);
      if (n < 1 || n > 9) {
        printf("Input is out of range. Please enter a number between 1 and 9.\n");
        return 1;
    }
          for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
      return 0;
}