/*
* Section 2
* Roll No : 22NA10049
* Name : Yash Agarwal
* Assignment No : 4
* Description : program to print total marks and grade
*/

#include <stdio.h>

int main()
{
    int n,a,ct,ms,es,i=1;        // variables used
    float tot;                   // used to calculate the sum

        printf("Enter the number of students : "); // no.of students
        scanf("%d",&n);

     for(int i=1;i<=n;i++)
     {
        printf("\tEnter the marks for student %d : \n",i);  // taking marks

        do
        {
            printf("\tAttendance[40]: ");
                scanf("%d",&a);
                if(a<0 || a>40)
                printf("\tprovide input within range\n");      // attendance
        }while(a<0 || a>40);                                   // repeats if input not within range


        do{
                printf("\tCT[20]: ");
                scanf("%d",&ct);
                if(ct<0 || ct>20)
                printf("\tprovide input within range\n");    //class test marks
        }while(ct<0 || ct>20);                               // checking input in range


        do{
                printf("\tMidsem [60]: ");
                scanf("%d",&ms);
                if(ms<0 || ms>60)
                printf("\tprovide input within range\n");    // midsems marks

        }while(ms<0 || ms>60);                              // checking input in range


        do{
                printf("\tEndsem [100]: ");
                scanf("%d",&es);
                if(es<0 || es>100)
                printf("\tprovide input within range\n");   // endsems marks
        }while(es<0 || es>100);                              // loop to ensure input in range



        tot=a*10.0/40.0 + ct*20.0/20.0 + ms*30.0/60.0 + es*40.0/100.0 ; //calculating the total marks in a separate variable in float format



         printf("Student %d : \n",i);          // the student number

         printf("\tTotal marks %f : \n",tot);   // printing the total marks of the student

         if(tot>=90.0)
            printf("\tGrade : EX\n");                             // ex if marks above 90
         else if(tot>=80)
            printf("\tGrade : A\n");                            // a if marks above 80
         else if(tot>=70)
            printf("\tGrade : B\n");                            // b if marks above 70
         else if(tot>=60)
            printf("\tGrade : C\n");                            // c if marks above 60
         else if(tot>=50)
            printf("\tGrade : D\n");                            // d if marks above 50
         else if(tot>=35)
            printf("\tGrade : P\n");                             // p if marks above 34
         else
            printf("\tGrade : F\n");                              // f
     }
}
