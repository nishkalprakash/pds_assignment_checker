//Roll No.: 23MA10016
//Name: Aryan Raina

#include <stdio.h>

int main() {
  int n;
  printf("Enter the number of students : ");
  scanf("%d", &n);
  if (n > 10 || n < 0) {
    printf("Invalid Input\n");
    return 0;
  }

  unsigned int rnum[10];
  float cg[10];  
  printf("Enter the Roll Number and CGPA of the students: \n");
  for (int i = 0; i < n; i++) {
    scanf("%u %f", &rnum[i], &cg[i]);
    cg[i] = (int) (100 * cg[i]);
    cg[i] /= 100.0; // truncate to 2 digits
    if (cg[i] >= 10.001 || cg[i] < 0) { // terminate program for cgpa > 10
      printf("Invalid Input\n");
      return 0;
    }
  }

  printf("\nRoll Number    CGPA\n");
  for (int i = 0; i < n; i++)
    printf("%8u       %.2f\n", rnum[i], cg[i]);

  // part b
  float avg = 0;
  for (int i = 0; i < n; i++) avg += cg[i];
  avg /= n;
  printf("\nAverage CGPA of the students = %.2f\n\n", avg);

  // part c
  int flag[10];
  for (int i = 0; i < n; i++) flag[i] = 0; // settting all flags to 0
  
  for (int i = 0; i < n; i++) {
    if (flag[i]) continue; // skip if already printed
    
    printf("The roll numbers with CGPA = %.2f are : ", cg[i]);
    for (int j = 0; j < n; j++) {
      if (flag[j]) continue; // skip if already printed
      float abs = cg[i] - cg[j];
      if (abs < 0) abs *= -1; // gets the absolute value of difference of cgpa

      if (abs < 0.01) {
	printf(" %u", rnum[j]);
	flag[j] = 1; //flag the cg so that same roll number isnt printed twice
      }
    }

    flag[i] = 1; // flagging the cg
    printf("\n");
  }
}
