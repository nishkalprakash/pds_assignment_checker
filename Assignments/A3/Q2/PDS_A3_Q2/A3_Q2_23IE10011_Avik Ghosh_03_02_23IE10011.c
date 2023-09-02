//Roll no.:23IE10011
//Name: Avik Ghosh
#include <stdio.h>

int main( ) {
  int Marks;
  printf("Enter the total marks of a student in a subject out of 100\n");
  scanf("%d",&Marks);
  //using if and else if statement to convert total marks into Grade
  if(Marks >= 90 && Marks <= 100)
    printf("Grade=EX\n");
  else if(Marks >= 80 && Marks < 90)
    printf("Grade=A\n");
  else if(Marks >= 70 && Marks < 80)
    printf("Grade=B\n");
  else if(Marks >= 60 && Marks < 70)
    printf("Grade=C\n");
  else if(Marks >= 50 && Marks < 60)
    printf("Grade=D\n");
  else if(Marks >= 35 && Marks < 50)
    printf("Grade=P\n");
  else if(Marks < 35)
    printf("Grade=F\n");
  else
    printf("Error: Wrong input\n");
  return 0;
}
  
