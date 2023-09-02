//Roll no:23HS10050
//Name:Shobhit kumar

#include<stdio.h>

int main() {
  int mark;
  printf("Enter the marks:");
  scanf("%d", &mark);

  if(mark>=90 && mark<=100){
    printf("Grade=EX\n");
  }
  else if(mark>=80 && mark<=90){
    printf("Grade=A\n");
  }
  else if(mark>=70 && mark<=80){
    printf("Grade=B\n");
  }
  else if(mark>=60 && mark<=70){
    printf("Grade=C\n");
  }
  else if(mark>=50 && mark<=60){
    printf("Grade=D\n");
  }
  else if(mark>=35 && mark<=50){
    printf("Grade=P\n");
  }
  else if(mark>=0 && mark<=35){
    printf("Grade=F\n");
  }
  else {
    printf("Wrong input\n");
  }

  return 0;

}


  
  
