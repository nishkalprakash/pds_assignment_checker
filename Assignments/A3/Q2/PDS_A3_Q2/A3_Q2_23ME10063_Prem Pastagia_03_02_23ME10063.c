// Roll Number:23ME10063
// Name:Prem Pastagia

#include <stdio.h>
int main()
{
  int marks;
  printf("Enter the total marks of student out of 100:\n");
  scanf("%d",&marks);
  if (marks>=90)
    printf("Grade=EX\n");
  else if (marks>=80)
     printf("Grade=A\n");
   else if (marks>=70)
     printf("Grade=B\n");
   else if (marks>=60)
     printf("Grade=C\n");
   else if (marks>=50)
     printf("Grade=D\n");
   else if (marks>=35)
     printf("Grade=P\n");
   else printf("Grade=F\n");


 
  return 0;
  
}
