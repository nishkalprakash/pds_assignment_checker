//Name : Bhumika Goyal
//Roll no. : 23MI10014

#include <stdio.h>
int main()
{
  int marks;//variable marks is used to store the marks obtained by the candidate.
  printf("Enter marks:");
  scanf("%d",&marks);

  if(marks>=90&&marks<=100){
    printf(" Grade=EX");
  }
 else if(marks<90&&marks>=80){
  printf("Grade =A");
  }
  else if(marks<80&&marks>=70){
    printf("Grade =B");
  }
  else if(marks<70&&marks>=60){
    printf("Grade=C");
  }
  else if(marks<60&&marks>=50){
    printf("Grade=D");
  }
 else if(marks<50&&marks>=35){
    printf("Grade =P");
  }
  else if (marks<35){
     printf("Grade=F");
    }
  return 0;
}