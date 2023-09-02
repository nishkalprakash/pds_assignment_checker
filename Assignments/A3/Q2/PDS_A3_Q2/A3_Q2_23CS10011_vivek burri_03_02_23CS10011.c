// roll no 23CS10011
// name vivek
#include<stdio.h>
int main(){
  int Mark;
  printf(" enter the marks of students");
  scanf("%d",&Mark);
  if (Mark>=90)
    printf("Grade=EX");
  else if (Mark>=80)
    printf("Grade=A");
  else if (Mark>=70)
    printf("Grade=B");
  else if (Mark>=60)
    printf("Grade=C");
  else if (Mark>=50)
    printf("Grade=D");
   else if (Mark>=35)
    printf("Grade=P");
   else if (Mark<35)
    printf("Grade=F");
  return 0;
    
  }
