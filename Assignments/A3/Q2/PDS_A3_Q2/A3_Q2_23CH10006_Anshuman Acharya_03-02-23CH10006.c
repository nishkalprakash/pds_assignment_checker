//Roll no.: 23Ch10006
//Name: Anshuman Acharya
#include<stdio.h>
#include<math.h>
int main()
{
  // Grading according to marks
  int marks;
  printf("Enter your marks:\n");
    scanf("%d",&marks);
  if(marks>=90)
    {
      printf("Excellent\n");
	}
  else if(marks>=80)
    {
      printf("A\nGood\n");
    }
  else if(marks>=70)
    {
      printf("B\nOK\tTry Better\n");
    }
  else if(marks>=60)
    {
      printf("C\nTry Better\n");
    }
  else if(marks>50)
    {
      printf("D\nPoor!\tWork Hard\n");
    }
  else if(marks>=35)
    {
      printf("PASS\nBut not impressive !\n");
    }
  else if(marks<=35 && marks>=0)
    {
      printf("FAIL\nWhat to say\n");
	}
  else
    {
      printf("Have you given the Exam ?");
    }
 
  return 0;
} 
