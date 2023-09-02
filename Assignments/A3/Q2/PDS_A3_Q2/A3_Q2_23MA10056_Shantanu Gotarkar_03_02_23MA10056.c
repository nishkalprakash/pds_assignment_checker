//Roll No.; 23MA10056
//Name : Shantanu

#include <stdio.h>
int main()
{
  int marksobt;
  scanf("%d",&marksobt);
  if (marksobt>=90)
    printf("Grade=EX");
  else if (marksobt>=80)
    printf("Grade=A");
  else if( marksobt>=70)
    printf("Grade=B");
  else if (marksobt>=60)
    printf("Grade=C");
  else if (marksobt>=50)
    printf("Grade=D");
  else if (marksobt>=35)
    printf("Grade=P");
    else
      printf("Grade=F");

  return 0 ;
}
  
  
