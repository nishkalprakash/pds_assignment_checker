//Roll No.:23MI10033
//Name: Piyush Bisht

#include <stdio.h>
int main()
{
  int marks;
  printf("Enter your marks");
  scanf("%d", &marks);
  if (marks>=90){
    printf("Grade=Ex");
  }
  else if ((marks>=80) && (marks<90)){
    printf("Grade=A");
  }
  else if ((marks>=70) && (marks<80)){
    printf("Grade=B");
  }
   else if ((marks>=60) && (marks<70)){
    printf("Grade=C");
  }
   else if ((marks>=50) && (marks<60)){
    printf("Grade=D");
  }
   else if ((marks>=35) && (marks<60)){
    printf("Grade=P");
  }
   else if (marks<35){
    printf("Grade=F");
  }
  return 0;
}
  
