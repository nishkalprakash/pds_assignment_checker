//Roll no.: 23IM30025
//NAME : Shreyash Girdhari Dhakate
#include<stdio.h>
int main(){
  int n;// defining that input should be integer only
  printf("Enter your marks:");//user input
  scanf("%d", &n);
  //defining grade for appropreate range of marks
  if ( n>=90 && n<=100){
    printf("Grade= Ex\n");
  }
  if ( n>=80 && n<90){
    printf("Grade= A\n");
  }
  if ( n>=70 && n<80){
    printf("Grade= B\n");
  }
  if ( n>=60 && n<70){
    printf("Grade= C\n");
  }
  if ( n>=50 && n<60){
    printf("Grade= D\n");
  }
  if ( n>=35 && n<50){
    printf("Grade= P\n");
  }
  if ( n<35){
    printf("Grade= F\n");
  }
  // alert for wrong input by user
  else {
    printf("wrong input\n");
  }
  return 0;

}
