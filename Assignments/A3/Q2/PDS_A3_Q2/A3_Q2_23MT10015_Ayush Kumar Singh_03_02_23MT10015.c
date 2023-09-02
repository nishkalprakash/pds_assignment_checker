//NAME: AYUSH KUAMR SINGH
// Roll No.: 23MT10015

#include <stdio.h>
#include <math.h>

int main(){
  int marks;
  printf("Entre Marks:\n");
  scanf("%d",&marks);
  if(marks <= 100){
  if(marks>=90){
    printf("Grade = EX\n");
  }else if(marks>=80){
    printf("Grade = A\n");
  }else if(marks>=70){
    printf("Grade = B\n");
  }else if(marks>=60){
    printf("Grade = C\n");
  }else if(marks>=50){
    printf("Grade = D\n");
  }else if(marks>=35){
    printf("Grade = P\n");
  }else if(marks<35){
    printf("Grade = F\n");
  }
  }else {
    printf("Invalid Input\n");
  }
  return 0;
}
