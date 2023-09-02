//Roll Number: 23ME10044
//Name: Lalit Karthikeyan M A

#include <stdio.h>

int main(){

  int mark;

  printf("Enter the total mark of the student: \n");
  scanf("%d", &mark);

  if(mark<0 || mark>100){
    printf("Invalid Mark!! \n");
  }

  if(mark>=90 && mark<=100){
    printf("Grade = EX \n");
  }
  if(mark>=80 && mark<90){
    printf("Grade = A \n");
  }

  if(mark>=70 && mark<80){
    printf("Grade = B \n");
  }

  if (mark>=60 && mark<70){
    printf("Grade = C \n");
  }

  if (mark>=50 && mark<60){
    printf("Grade = D \n");
  }

  if (mark>=35 && mark<50){
    printf("Grade = P \n");
  }

  if(mark<35 && mark>=0){
    printf("Grade = F \n");
  }

  return 0;
}
