/*
* Section 2
* Roll No : 22ME30050
* Name : Raj Dineshkumar Gupta
* Assignment No : 4
* Description : give grades to students
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int N,i;
    float att,ct,ms,es,tm;
    printf("Enter the no. of students: ");
    scanf("%d",&N);
    for(i=1; i<=N; i++)
    {
        printf("\nenter the marks for student %d\n",i);
        printf("Attendance for student %d is : ",i);
        scanf("%f",&att);
        while (att>40 || att<0)
        {
            printf("wrong input\nAttendance for student %d is : ",i);
            scanf("%f",&att);
        }

        printf("class test marks for student %d is : ",i);
        scanf("%f",&ct);
        while (ct>20 || ct<0)
        {
            printf("wrong input\nclass test marks for student %d is : ",i);
            scanf("%f",&ct);
        }
        printf("mid sems marks for student %d is : ",i);
        scanf("%f",&ms);
        while (ms>60|| ms<0)
        {
            printf("wrong input\nmid sems marks for student %d is : ",i);
            scanf("%f",&ms);
        }

        printf("end sems marks for student %d is : ",i);
        scanf("%f",&es);
        while (es>100||es<0)
        {
            printf("wrong input\nclass test marks for student %d is : ",i);
            scanf("%f",&es);
        }
        tm=((att*0.25)+(ct*1)+(ms*0.5)+(es*0.4));
        printf("\n\nstudent %d \n  Total marks: %0.2f\n  ",i,tm);
        if (tm>=90)
            printf("Grade: EX\n\n");
        else if (tm>=80 && tm<90)
            printf("Grade: A\n\n");
        else if (tm>=70 && tm<80)
            printf("Grade: B\n\n");
        else if (tm>=60 && tm<70)
            printf("Grade: C\n\n");
        else if (tm>=50 && tm<60)
            printf("Grade: D\n\n");
        else if (tm>=35 && tm<50)
            printf("Grade: P\n\n");
        else if (tm>=0 && tm<35)
            printf("Grade: F\n\n");

    }
    return 0;
}

