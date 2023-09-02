#include<stdio.h>
int main()
{
  int marks;
  printf("enter your marks\n");
  scanf("%d",&marks);
  if(marks>=90){
    printf("your grade is EX\n");
  }
  else if(marks>=80){
    printf("your grade is A\n");
  }
  else if(marks>=70){
    printf("your grade is B\n");
  }
  else if(marks>=60){
    printf("your grade is C\n");
  }
  else if(marks>=50){
    printf("your grade is D\n");
  }
  else if(marks>=35){
    printf("your grade is P\n");
  }
  else if(marks<35){
      printf("your grade is F\n");
    }
  return 0;
}
  
