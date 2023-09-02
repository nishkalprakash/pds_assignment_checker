#include <stdio.h>
int main()
{
  int x;
  printf("Enter total marks");
  scanf("%d",&x);
  if (x>=90 && x<=100 )
  {
  printf("grade=EX");
  }
  else if (x>=80 && x<90)
  {
  printf("grade=A");
  }
  else if (x>=70 && x<80)
  {
  printf("grade=B"); 
  }
  else if(x>=60 && x<70)
  {
  printf("grade=C");
  }
  else if(x>=50 && x<60)
  {
  printf("grade=D");
  }
  else if(x>=35 && x<50)
  {
  printf("grade=P");
  }
  else if(x<35)
  {
  printf("grade=F");
  }
  return 0;
}
