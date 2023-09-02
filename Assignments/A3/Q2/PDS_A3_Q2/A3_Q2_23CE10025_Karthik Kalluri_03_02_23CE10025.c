#include <stdio.h>
int main()
{
  int a;
  printf("Enter the marks of a student\n");
  scanf("%d",&a);
  if(a>=90)
    printf("GRADE=EX\n");
  else if((a<90)&&(a>=80))
    printf("GRADE=A\n");
  else if((a<80)&&(a>=70))
    printf("GRADE=B\n");
  else if((a<70)&&(a>=60))
    printf("GRADE=C\n");
  else if((a<60)&&(a>=50))
    printf("GRADE=D\n");
  else if((a<50)&&(a>=35))
    printf("GRADE=P\n");
  else if((a<35)&&(a>=0))
    printf("GRADE=F\n");
  else
    printf("NOT VALID MARKS\n");
return 0;
}
