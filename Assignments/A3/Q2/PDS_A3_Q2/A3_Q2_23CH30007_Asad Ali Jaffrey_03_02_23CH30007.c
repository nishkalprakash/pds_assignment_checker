//Roll No.: 23CH30007
//Name: Asad Ali Jaffrey

#include<stdio.h>

int main() {
  int marks;
  printf("Enter your marks out of 100\n");
  scanf("%d", &marks);

  if (marks>=90 && marks<=100) {
    printf("Grade=EX\n");
  }

  if (marks>=80 && marks<90) {
    printf("Grade=A\n");
  }

  if (marks>=70 && marks<80) {
    printf("Grade=B\n");
  }

  if (marks>=60 && marks<70) {
    printf("Grade=C\n");
  }

  if (marks>=50 && marks<60) {
    printf("Grade=D\n");
  }

  if (marks>=35 && marks<50) {
    printf("Grade=P\n");
  }

  if (marks<35 && marks>=0) {
    printf("Grade=F\n");
  }

  //if an invalid value is entered

  if (marks<0||marks>100) {
    printf("Please enter valid marks out of 100!!!\n");
  }

  return 0;
}
