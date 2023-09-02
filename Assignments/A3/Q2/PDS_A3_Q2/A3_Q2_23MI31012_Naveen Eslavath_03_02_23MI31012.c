#include <stdio.h>
int main()
{
  int marks;
  printf("Enter your marks:");
  scanf("%d",&marks);
  if(marks>=90){
    printf("Grade is EX");
  }
  else if(marks>=80){
    printf("Grade is A");
  }
  else if(marks>=70){
    printf("Grade is B");
  }
  else if(marks>=60){
    printf("Grade is C");
  }
  else if(marks>=50){
    printf("Grade is D");
  }
  else if(marks>=35){
    printf("Grade is P");
  }
  else (marks<35);
  {
      printf("Grade is F");
  }
  return 0;
}
      
