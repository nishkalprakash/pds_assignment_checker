/*
* Section 2
* Roll No : 22PH1002
* Name : Abhimanyu Dev Upadhyay
* Assignment No : 2
* Description : Program to grade multiple student according to input marks
*/

#include <stdio.h>

int main()
{
    //Defining n to get no of students input
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    printf("\n\n");

    //Per student, the given loop will run once so that each one can be evaluated and the data can be discarded to make room for next student's data
    for(int i = 1; i <= n; i++)
    {
        double a,ct,ms,es; // Defining variables to store marks for attendance, class test, mid sems and end sems
        // Taking these variables as double as in later calculations we will need decimal places
        printf("Enter marks for student %d;\n", i);

        //Asking user for inputs
        //Using a do while loop as we need to take the input at least once but if the input is incorrect then we have to ask the user for another input
        do
        {
            printf("\tAttendance [40]: ");
            scanf("%lf", &a);
            printf("\n");
            if(a<0||a>40)
            {
                printf("The input is out of range, please enter valid input");
            }
        }
        while(a<0||a>40);

        do
        {
            printf("\tCT [20]: ");
            scanf("%lf", &ct);
            printf("\n");
            if(ct<0||ct>20)
            {
                printf("The input is out of range, please enter valid input");
            }
        }
        while(ct<0||ct>20);

        do
        {
            printf("\tMidsem [60]: ");
            scanf("%lf", &ms);
            printf("\n");
            if(ms<0||ms>60)
            {
                printf("The input is out of range, please enter valid input");
            }
        }
        while(ms<0||ms>60);

        do
        {
            printf("\tEndsem [100]: ");
            scanf("%lf", &es);
            if(es<0||es>100)
            {
                printf("The input is out of range, please enter valid input");
            }
        }
        while(es<0||es>100);

        //Defining and calculating total marks
        double t=0;

        // Now we see that various fields have different weightage in the grading, hence if we redefine all values to the weightage we can get total marks easily
        // For eg, we convert 'a' from a number out of 40 to a number out of 10 using a = (a/40)*10 = a*0.25

        a = a*0.25;
        ct = ct*1.0;
        ms = ms*0.5;
        es = es*0.4;

        t = a + ct + ms + es;

        //Printing total marks and corresponding grades as per the grading system
        printf("Student %d\n\tTotal marks: %.2lf\n\tGrade: ", i, t);
        if(t>=90)
        {
            printf("EX\n\n");
        }
        else if(t>=80)
        {
            printf("A\n\n");
        }
        else if(t>=70)
        {
            printf("B\n\n");
        }
        else if(t>=60)
        {
            printf("C\n\n");
        }
        else if(t>=50)
        {
            printf("D\n\n");
        }
        else if(t>=35)
        {
            printf("P\n\n");
        }
        else
        {
            printf("F\n\n");
        }

    }
    return 0;
}

