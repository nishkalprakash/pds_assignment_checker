/*
Section 2
Roll no.: 22ME10034
Name: Hindvee Rajesh Vispute
Assignment no.: 02
Description: Program to compute result of a student
*/

#include<stdio.h>

int main(){
int N, t;
float attendance , ct, ms, es, Marks;
/*
ct- class test marks;
ms- mid sem marks;
es- end sem marks
N- Total no. of students
t- roll no. of the student
*/
printf("Enter the number of students :\n");
scanf("%d", &N);


while(N>0)
{
    /* Initialising the variables, because we are not storing data
    for each student */

    attendance = 0.0;
    ct = 0.0;
    ms = 0.0;
    es = 0.0;
    Marks = 0.0;
    t =1;

    printf("Enter the marks of student %d :", t);


    printf("\n Attendance [40] :");
    scanf("%f", &attendance);

    /* using break statement for exiting the loop
    when values which lie out of the specified range */

    if(attendance> 40 || attendance<0)
    {
        break;
    }

    printf("\n CT [20] :");
    scanf("%f", &ct);
    if(ct>20 || ct<0)
    {
        break;
    }

    printf("\n Midsem [60] :");
    scanf("%f", &ms);
    if(ms>60 || ms<0)
    {
        break;
    }

    printf("\n Endsem [100] :");
    scanf("%f", &es);
    if(es>100 || es<0)
    {
        break;
    }

   Marks = (0.1*attendance) + (0.2*ct) + (0.3*ms) + (0.4*es);

   printf("Student %d \n", t);
   printf(" Total marks: %f \n", Marks);

   if(Marks>=90)
    printf("    Grade : Ex \n");
   else if(Marks >= 80 && Marks<90)
    printf("    Grade : A \n");
   else if(Marks >= 70 && Marks<80)
    printf("    Grade : B \n");
   else if(Marks >= 60 && Marks<70)
    printf("    Grade : C \n");
   else if(Marks >= 50 && Marks<60)
    printf("    Grade : D \n");
   else if(Marks >= 35 && Marks<50)
    printf("    Grade : P \n");
   else
        printf("    Grade : F \n");


/*
Decrement value of N
Incrementing the value of t
*/
N--;
t++;



}

return 0;
}
