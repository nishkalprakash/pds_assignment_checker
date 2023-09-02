//name tanishq sura
//roll no 23CS10071

#include<stdio.h>

int main(){
  int marks;
  printf("input the total marks in the subject out of 100\n");
  scanf("%d",&marks);
  if(marks>100)                      //prompts incorrect input if input > 100
    printf("incorrect input\n");
  else if(marks>=90)                 //else if goes to next if conditional if the first one fails
    printf("Grade=EX\n");
  else if(marks>=80)
    printf("Grade=A\n");
  else if(marks>=70)
    printf("Grade=B\n");
  else if(marks>=60)
    printf("Grade=C\n");
  else if(marks>=50)
    printf("Grade=D\n");
  else if(marks>=35)
    printf("Grade=P\n");
  else                              //gives the condition of marks<35
    printf("Grade=F\n");

  return 0;
}
