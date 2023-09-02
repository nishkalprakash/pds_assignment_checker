//Name: Nayandeep Deb
//Roll no. 23MA10036

#include <stdio.h>

int main() {
  int mark;
  printf("Marks: ");
  scanf("%d", &mark);
  if (mark <= 100 && mark >= 90)
    printf("Grade = EX\n");
  else if (mark < 90 && mark >= 80)
    printf("Grade = A\n");
  else if (mark < 80 && mark >= 70)
    printf("Grade = B\n");
  else if (mark < 70 && mark >= 60)
    printf("Grade = C\n");
  else if (mark < 60 && mark >= 50)
    printf("Grade = D\n");
  else if (mark < 50 && mark >= 35)
    printf("Grade = P\n");
  else if (mark < 35 && mark >= 0)
    printf("Grade = F\n");
  else if (mark > 100 || mark <  0)
    printf("Invalid Marks\n");
  return 0;
}
