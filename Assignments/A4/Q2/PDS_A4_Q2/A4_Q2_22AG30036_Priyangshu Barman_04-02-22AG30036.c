/*
Section = 2
Roll No. = 22AG30036
Name = Priyangshu Barman
Assignment = 4(Q2)
Description = To calculate the total marks for the student.
*/
#include<stdio.h>
int main()
{
   int N;
   int Attendence;
   int ClassTest;
   int Midsem;
   int Endsem;
   int c = 1;
   printf("Enter the number of students : ");//number of students whose marks will be presented
   scanf("%d", &N);
   while(N > 0)
   {
        printf("Enter the marks for student %d : \n",c);
   c ++; //counting the number of students given by user
   printf("Attendence [40]: ");
   scanf("%d", &Attendence);
   printf("CT [20]: ");
   scanf("%d", &ClassTest);
   printf("Midsem [60]: ");
   scanf("%d", &Midsem);
   printf("Endsem [100]: ");
   scanf("%d", &Endsem);
   double Marks = (0.1*Attendence/40 + 0.2*ClassTest/20 + 0.3*Midsem/60 + 0.4*Endsem/100)*100;
   if(Marks >= 90)
   {
    printf("Total marks: %f\n",Marks);
   printf("EX\n");
   }
   else if(Marks >= 80 && Marks < 90)
   {
    printf("Total marks: %f\n",Marks);
   printf("A\n");
   }
   else if(Marks >= 70 && Marks < 80)
    {
        printf("Total marks: %f\n",Marks);
   printf("B\n");
    }
   else if(Marks >= 60 && Marks < 70)
    {
        printf("Total marks: %f\n",Marks);
   printf("C\n");
    }
   else if(Marks >= 50 && Marks < 60)
    {
        printf("Total marks: %f\n",Marks);
   printf("D\n");
    }
   else if(Marks >= 35 && Marks < 50)
    {
        printf("Total marks: %f\n",Marks);
   printf("P\n");
    }
   else
    {
        printf("Total marks: %f\n",Marks);
   printf("F\n");
   }
   N--;
   }
   return 0;
}
