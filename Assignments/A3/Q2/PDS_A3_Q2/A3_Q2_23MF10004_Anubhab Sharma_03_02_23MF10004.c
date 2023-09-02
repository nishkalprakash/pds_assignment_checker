#include <stdio.h>
int main()
{
  int m;
  printf("Enter the marks obtained by the student: \n");
  scanf("%d", &m);

  if
    (m>=90)
    printf("Grade=EX \n");
  else if
    (m>=80)
    printf("Grade=A \n");
  else if
    (m>=70)
    printf("Grade=B \n");
  else if
    (m>=60)
    printf("Grade=C \n");
  else if
    (m>=50)
    printf("Grade=D \n");
  else if
    (m>=35)
    printf("Grade=P \n");
  else if
    (m<35)
    printf("Grade=F \n");
}
  
