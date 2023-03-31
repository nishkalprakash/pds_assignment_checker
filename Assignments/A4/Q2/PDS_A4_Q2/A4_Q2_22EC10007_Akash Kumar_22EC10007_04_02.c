/*
* Section 2
* Roll No : 22EC10007
* Name : Akash Kumar
* Assignment : 4
* Description : Code to calculate final marks and grade obtained
*/



// For the total marks obtained = 50, the table tells to print grade D. But, in test cases, P is printed. I have followed the table and printed D.



#include <stdio.h>

int main()
{
    int N;      // N represents the number of students
    int n=1;

    printf("Enter the number of students N\n");
    scanf("%d", &N);


    while (n <= N)
    {
        int att, ct, ms, es;
        // att - attendance, ct - class test, ms - midsem marks, es- endsem marks

        int valid = 0; // for checking valid input marks




        printf("Enter the marks for student %d\n", n);

        printf("Enter attendance marks\n");
        scanf("%d", &att);

        while (valid == 0)
        {
            if (att >= 0 && att <= 40)
                valid = 1;
            if (att < 0 || att > 40)
            {
                printf("Enter valid attendance marks\n");
                scanf("%d", &att);
            }
        }

        valid = 0;



        printf("Enter class test marks\n");
        scanf("%d", &ct);

        while (valid == 0)
        {
            if (ct >= 0 && ct <= 20)
                valid = 1;
            if (ct < 0 || ct > 20)
            {
                printf("Enter valid class test marks\n");
                scanf("%d", &ct);
            }
        }

        valid = 0;



        printf("Enter midsem marks\n");
        scanf("%d", &ms);


        while (valid == 0)
        {
            if (ms >= 0 && ms <= 60)
                valid = 1;
            if (ms < 0 || ms > 60)
            {
                printf("Enter valid midsem marks\n");
                scanf("%d", &ms);
            }
        }

        valid = 0;



        printf("Enter endsem marks\n");
        scanf("%d", &es);

        while (valid == 0)
        {
            if (es >= 0 && es <= 100)
                valid = 1;
            if (es < 0 || es > 100)
            {
                printf("Enter valid endsem marks\n");
                scanf("%d", &es);
            }
        }

        valid = 0;


        printf("\n\n\n\n");





        printf("Attendance (40) : %d\n", att);
        printf("CT (10) : %d\n", ct);
        printf("Midsem (60) : %d\n", ms);
        printf("Endsem (100) : %d\n", es);


        float total = (att*10)/ 40.0 +  ct + ms/2.0 + (es * 40)/100.0;
        printf("Total marks = %f\n", total);



        if (total >= 90)
            printf("Grade : EX \n");
        else if (total >= 80 && total < 90)
            printf("Grade : A \n");
        else if (total >= 70 && total < 80)
            printf("Grade : B \n");
        else if (total >= 60 && total < 70)
            printf("Grade : C \n");
        else if (total >= 50 && total < 60)
            printf("Grade : D \n");
        else if (total >= 35 && total < 50)
            printf("Grade : P \n");
        else if (total < 35)
            printf("Grade : F \n");





        n = n +1;
    } // closing of while loop


    return 0;
}
