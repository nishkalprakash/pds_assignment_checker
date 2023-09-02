//Roll No: 23ME30020
//Name: Kalepu Jyotiraditya

#include <stdio.h>
int main()
{
  int marks = 0;       // Declaring variable to store marks
  printf("Please enter your marks\n");  
  scanf("%d", &marks);
  if(marks > 100 || marks < 0) printf("Enter valid marks\n"); // Checking for valid entry
  else if(marks<=100 && marks >=90)              // Checking for EX grade
    {
      printf("Your grade is EX\n");
      printf("Well Done!!");
    }
  else if(marks<90 && marks >=80) printf("Your grade is A\n");// Checking for A grade
  else if(marks<80 && marks >=70) printf("Your grade is B\n");// Checking for B grade
  else if(marks<70 && marks >=60) printf("Your grade is C\n");// Checking for C grade
  else if(marks<60 && marks >=50) printf("Your grade is D\n");// Checking for D grade
  else if(marks<50 && marks >=35) printf("Your grade is P\n");// Checking for P grade
  else if(marks<35 && marks >=0)               // Checking for F grade
    {
      printf("Your grade is F\n");
      printf("Work Harder!!\n");
    }
  return 0;
}
