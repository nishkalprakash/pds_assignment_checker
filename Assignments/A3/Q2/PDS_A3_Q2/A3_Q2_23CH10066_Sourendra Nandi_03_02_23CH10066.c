//Name : Sourendra Nandi
//Roll no. 23CH10066
#include <stdio.h>
int main()
{
  int marks;
  printf("Enter the Marks of Student out of 100 : \n");   //Getting Marks of student
  scanf("%d",&marks);
  if (marks>=90)
    {
      printf("Grade of Student = EX \n");
    }
  else if (marks>=80)
    {
      printf("Grade of Student = A \n");
    }
   else if (marks>=70)
    {
      printf("Grade of Student = B \n");
    }
   else if (marks>=60)
    {
      printf("Grade of Student = C \n");
    }
   else if (marks>=50)
    {
     printf("Grade of Student = D \n"); 
    }
   else if (marks>=35)
    {
      printf("Grade of Student = P \n");
    }
   else if (marks<35)
    {
     printf("Grade of Student = F \n");
    }
  
   return 0;
}
    
   
   
       
  
  
    
      
