//Roll no - 23NA10036
// Rishab Yadav

#include <stdio.h>

int main(){

  int tMarks;

  printf("Enter your total marks out of 100:\n");
  scanf("%d", &tMarks);

  if(tMarks >= 90  &&  tMarks < 100){
    printf("Your grade is EX \n");
  }

  if(tMarks >= 80  &&  tMarks < 90){
    printf("Your grade is A \n");
  }

  if(tMarks >= 70  &&  tMarks < 80){
    printf("Your grade is B \n");
  }

  if(tMarks >= 60  &&  tMarks < 70){
    printf("Your grade is C \n");
  }

  if(tMarks >= 50  &&  tMarks < 60){
    printf("Your grade is D \n");
  }

  if(tMarks >= 35  &&  tMarks < 50){
    printf("Your grade is P \n");
  }

  if(tMarks >= 0  &&  tMarks < 35){
    printf("Your grade is F \n");
  }

  
  return 0;
}
