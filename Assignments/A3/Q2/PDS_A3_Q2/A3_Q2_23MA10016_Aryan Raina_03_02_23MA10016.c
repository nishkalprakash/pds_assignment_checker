//Name: Aryan Raina
//Roll No.: 23MA10016

#include <stdio.h>

int main() {
  printf("Enter the total marks: ");
  int x;
  scanf("%d", &x);
  if (x >= 90) printf("Grade=EX\n");
  else if (x >= 80) printf("Grade=A\n");
  else if (x >= 70) printf("Grade=B\n");
  else if (x >= 60) printf("Grade=C\n");
  else if (x >= 50) printf("Grade=D\n");
  else if (x >= 35) printf("Grade=P\n");
  else printf("Grade=F\n");
  
  return 0;
}
