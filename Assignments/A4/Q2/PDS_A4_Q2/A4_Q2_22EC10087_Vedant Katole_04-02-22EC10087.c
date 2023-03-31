/*
Section-2
Roll no.- 22EC10087
Name- Vedant Katole
Assignment No- 4
Description- Loops
*/

#include<stdio.h>

void main()
{
   int n, att, ctest, midsem, endsem;
   float marks;

   printf("enter number of students:");
   scanf("%d", &n);

   for(int i=1; i<=n ; i++)
   {
       printf("\n\n");
       printf("Enter the marks for student %d:\n", i);

       printf("\nAttendence[40]: ");
       do
       {
           scanf("%d", &att);
       }while(att<0 && att>40);

       printf("\nCT [20]: ");
       do
       {
           scanf("%d", &ctest);
       }while(ctest<0 && ctest>20);

       printf("\nMidsem [60]: ");
       do
       {
           scanf("%d", &midsem);
       }while(midsem<0 && midsem>60);

       printf("\nEndsem [100]: ");
       do
       {
           scanf("%d", &endsem);
       }while(endsem<0 && endsem>100);

       marks = 0.25*(float)att + (float)ctest + 0.5*(float)midsem + 0.4*(float)endsem;
       printf("\nStudent %d", i);
       printf("\nTotal marks: %.02f\n", marks);

       if(marks>=90)
        printf("EX");
       else if(marks<90 && marks>=80)
        printf("A");
       else if(marks<80 && marks>=70)
        printf("B");
       else if(marks<70 && marks>=60)
        printf("C");
       else if(marks<60 && marks>=50)
        printf("D");
       else if(marks<50 && marks>=35)
        printf("P");
       else
        printf("F");
   }
}
