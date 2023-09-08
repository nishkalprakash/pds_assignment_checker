//Roll No.: 23MA10016
//Name: Aryan Raina

#include <stdio.h>

int main() {
  int fnd = 0;
  while (fnd != 4) {
    printf("Enter a single digit number : ");
    int x;
    scanf("%d", &x);
    if (x < 0) {
      printf("Program terminated\n");
      return 0;
    }
    
    if (fnd == 0) fnd = (x == 5) ? 1 : 0;
    else if (fnd == 1) fnd = (x == 1) ? 2 : 0;
    else if (fnd == 2) fnd = 3;
    else if (fnd == 3) fnd = (x == 7) ? 4 : 0;

    if (x == 5 && fnd != 3) fnd = 1;
  }

  printf("Pattern Found\n");
}
