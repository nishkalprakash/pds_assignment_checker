/*
Section :2
Roll No:22EC30015
Name: Chandrabali Biswas
Assignment No:4
Description: Printing details of each student
*/
#include <stdio.h>
int main()
{
  int N;
  float a,ct,ms,es,tot;  //declaring variables
  printf("Enter the number of students:");
  scanf("%d",&N);   //Taking input from user
  for(int i=1;i<=N;i++)  //Loop that takes input for each student
  {
      printf("Enter the marks for student %d:\n",i);
      printf("Attendance[40]:\nCT[20]:\nMidsem[60]:\nEndsem[100]:\n");
      scanf("%f%f%f%f",&a,&ct,&ms,&es);
      a=a/40*100;
      ct=ct/20*100;
      ms=ms/60*100;
      tot=(a/10.0)+(20.0/100.0*ct)+(30.0/100.0*ms)+(40.0/100.0*es);
      printf("Total marks:%f\n",tot);  //prints the total marks
      if(tot>=90)    //checks for the grade of the student
        printf("Grade:EX\n");
    else if(tot>=80 && tot<90)
        printf("Grade:A\n");
    else if(tot>=70 && tot<80)
        printf("Grade:B\n");
    else if(tot>=60 && tot<70)
        printf("Grade:C\n");
    else if(tot>=50 && tot<60)
        printf("Grade:D\n");
    else if(tot>=35 && tot<50)
        printf("Grade:P\n");
    else
        printf("Grade:F\n");
  }
  return 0;  //end
}
