//Roll No:23MF10042
//Name:Theyanesh Eswaramoorthy Rajahkrishnan
#include <stdio.h>
int main()
{
  float mark;
  printf("Enter the mark\n");
  scanf("%f",&mark);
  if(mark<=100){
    if(mark>=90)
    printf("Grade is EX\n");
    else if(mark>=80)
    printf("Grade is A\n");
    else if(mark>=70)
    printf("Grade is B\n");
    else if(mark>=60)
    printf("Grade is C\n");
    else if(mark>=50)
    printf("Grade is D\n");
    else if(mark>=35)
    printf("Grade is P\n");
    else
    printf("Grade is F\n");
  }
  else
    printf("Mark should be less than 100");
  return 0;
}
