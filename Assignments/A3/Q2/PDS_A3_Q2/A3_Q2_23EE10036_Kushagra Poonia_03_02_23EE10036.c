//Roll no: 23EE10036
//Name: Kushagra Poonia

#include <stdio.h>

int main(){
  int marks=0;

  printf("Enter the total number of the candidate: \n");
  scanf("%d", &marks);

  if (marks <= 100 && marks >= 90){
    printf("Grade = EX\n");
    return 0;
  }
  if (marks < 90 && marks >= 80){
    printf("Grade = A\n");
    return 0;
  }
  if (marks < 80 && marks >= 70){
    printf("Grade = B\n");
    return 0;
  }
  if (marks < 70 && marks >= 60){
    printf("Grade = C\n");
    return 0;
  }
  if (marks < 60 && marks >= 50){
    printf("Grade = D\n");
    return 0;
  }
  if (marks < 50 && marks >= 35){
    printf("Grade = P\n");
    return 0;
  }
  if (marks < 35 && marks >= 0){
    printf("Grade = F\n");
    return 0;
  }
  if (marks > 100 || marks < 0){
    printf("The input was invalid\n");
    // main(); //If the input was invalid this will start the process again
    return 0;
  }
}
  
