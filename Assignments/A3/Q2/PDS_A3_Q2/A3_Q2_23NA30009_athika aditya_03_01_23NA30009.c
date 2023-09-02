//Roll no -23NA30009
//Athika
#include <stdio.h>

int main(){
  int  tMarks;
  printf("Enter your total marks out of 100:\n");
  scanf("%d",&tMarks);

  if(tMarks >=90 && tMarks <100){
    printf("your grade is EX\n");
  }
  if(tMarks >=80 && tMarks <90){
    printf("your grade is A\n");
  }
  if(tMarks >=70 && tMarks <80){
    printf("your grade is B\n");
  }
  if(tMarks >=60 && tMarks <70){
    printf("your grade is C\n");
  }
  if(tMarks >=50 && tMarks <60){
    printf("your grade is D\n");
  }
  if(tMarks >=35 && tMarks <50){
    printf("your grade is P\n");
  }
  if(tMarks <35){
    printf("your grade is F\n");
  } 
  return 0;
}
