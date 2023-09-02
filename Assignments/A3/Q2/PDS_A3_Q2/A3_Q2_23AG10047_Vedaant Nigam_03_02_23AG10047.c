#include <stdio.h>
int main()
{
  int marks;
  printf("enter marks obtained in the subject\n");
  scanf("%d",&marks);
  if(marks>=90){printf("grade=EX");}
  else if(marks>=80){printf("grade=A");}
  else if(marks>=70){printf("grade=B");}
  else if(marks>=60){printf("grade=C");}
  else if(marks>=50){printf("grade=D");}
  else if(marks>=35){printf("grade=P");}
  else printf("grade=F");
  return 0;
}
      
