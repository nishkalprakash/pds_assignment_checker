// Roll no. - 23IE10031
// Name - Om singh Jadon

#include <stdio.h>

int main()
{
  int marks;
  printf("MARKS: ");
  scanf("%d", &marks);

  printf("Grade: ");
  if(marks>=90) printf("EX");
  else if(marks>=80) printf("A");
  else if(marks>=70) printf("B");
  else if(marks>=60) printf("C");
  else if(marks>=50) printf("D");
  else if(marks>=35) printf("P");
  else if(marks<35) printf("F");
  printf("\n");

  return 0;
}
