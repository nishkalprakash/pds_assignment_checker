//Name: Disha Mukherjee
//Roll no.:23CH10026

#include <stdio.h>

int main()
{
  int tm;
  printf("enter grade out of 100\n");
  scanf("%d",&tm);
  if(tm>=90)
    printf("\nGrade=EX");
  else if(tm<=90 && tm>=80)
    printf("\nGrade=A");
  else if(tm<=80 && tm>=70)
    printf("\nGrade=B");
  else if(tm<=70 && tm>=60)
    printf("\nGrade=C");
  else if(tm<=60 && tm>=50)
    printf("\nGrade=D");
  else if(tm<=50 && tm>=35)
    printf("\nGrade=P");
  else if(tm<35)
    printf("\nGrade=F");
  return 0;
}
