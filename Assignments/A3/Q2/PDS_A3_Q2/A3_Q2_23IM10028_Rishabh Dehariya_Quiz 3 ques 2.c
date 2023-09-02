//Roll No - 23IM10028
//Name - Rishabh Dehariya

#include<stdio.h>

int main()
{
  int marks;
  printf("Enter the total marks of a student in a subject\n");
  scanf("%d", &marks);

  if(marks>100 || marks<0){
    printf("You have entered the wrong input");
  }
  else if (marks>=90 && marks<=100){
    printf("Grade = EX\n");
  }
  else if (marks>=80 && marks<90){
    printf("Grade = A\n");
  }
  else if (marks>=70 && marks<80){
    printf("Grade = B\n");
  }
  else if (marks>=60 && marks<70){
    printf("Grade = C\n");
  }
  else if (marks>=50 && marks<60){
    printf("Grade = D\n");
  }
  else if (marks>=35 && marks<50){
    printf("Grade = E\n");
  }
  else if (marks>=0 && marks<35){
    printf("Grade = F\n");
  }
  return 0;
}
  
