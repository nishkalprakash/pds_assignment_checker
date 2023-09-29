//Roll No.:<23MT30010>
//Name:<Purva Harde>
//Set:<2>
#include <stdio.h>
  int main() {
    int num;
    int largest1 = -1, largest2 = -1;
    int smallest1 = -1, smallest2 = -1;
    int firstInput = 1;
      printf("Enter numbers (enter a negative number to finish):\n");
      while (1) {
        scanf("%d", &num);
          if (num < 0) {
            break;
        }
          if (firstInput) {
            largest1 = largest2 = num;
            smallest1 = smallest2 = num;
            firstInput = 0; // 0 represents false
        } else {
            if (num > largest1) {
                largest2 = largest1;
                largest1 = num;
            } else if (num > largest2 && num != largest1) {
                largest2 = num;
            }
              if (num < smallest1) {
                smallest2 = smallest1;
                smallest1 = num;
            } else if (num < smallest2 && num != smallest1) {
                smallest2 = num;
            }
        }
    }
      if (firstInput) {
        printf("No positive numbers entered.\n");
    } else {
        printf("Largest number: %d\n", largest1);
        printf("Second largest number: %d\n", (largest2 == -1 ? -1 : largest2));
        printf("Smallest number: %d\n", smallest1);
        printf("Second smallest number: %d\n", (smallest2 == -1 ? -1 : smallest2));
    }
      printf("Program terminated.\n");
      return 0;
}