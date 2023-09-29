//Roll no. 23MA10036
//Name: Nayandeep Deb

#include <stdio.h>

int main() {
  int n, s;
  printf("Give scale factor(between 1 to 6): "); //prompting user for scale and no. of lines
  scanf("%d", &s);
  printf("Give number of lines(between 1 and 10): ");
  scanf("%d", &n);
  if (n < 1 || n > 10 || s < 1 || s > 6) { //Error: invalid input case
    printf("Invalid Input\n");
    return 1;
  }
  int m = 3 + s; //initializing max
  int p = 1; //initializing printable number
  for (int i = 1; i <= n; i++) { //main loop for changing lines
    for (int j = 0; j < i; j++) { //nested loop for printing numbers in line
      if (p > m) p = 1; //case to loop over numbers
      printf("%d", p);
      p++;
    }
    printf("\n");
  }
  return 0;
}
