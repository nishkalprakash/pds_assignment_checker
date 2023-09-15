//Roll no. 23MA10036
//Name: Nayandeep Deb

#include <stdio.h>

int main() {
  unsigned int roll[10];
  int n;
  float cg[10];
  printf("Enter number(Max 10): ");
  scanf("%d", &n);
  if (n > 10) {printf("Invalid value"); return 0;}
  for (int i = 0; i < n; i++){ //taking user input for each student
    printf("Give roll no. and CGPA of Student %d: ", i+1);
    scanf("%u %f", &roll[i], &cg[i]);
  }
  printf("a.\n");
  for (int i = 0; i < n; i++) {
    printf("Roll no. %8u    CGPA: %.2f\n", roll[i], cg[i]);
  }
  float avg = 0;
  for (int i = 0; i < n; i++) avg += cg[i];
  avg /= n;
  printf("b. Average CGPA = %f\n", avg);
}
