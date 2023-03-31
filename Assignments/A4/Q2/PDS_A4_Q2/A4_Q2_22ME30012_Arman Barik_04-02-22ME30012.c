/*
* Section 2
* Roll No : 22ME30012
* Name : Arman Barik
* Assignment No : 4
* Description : Calculating total marks and grading
*/

#include <stdio.h>
void main()
{
   int n; // variable used for the number of students.
   printf("Enter the number of students:\n");
   scanf("%d",&n);
   for (int i=1;i<=n;i++)
    {
        float A,CT,MS,ES; // variable defined for Attendance, Class Test, Mid Semester, End Semester marks are respectively A, CT, MS, ES.
        printf("Enter the marks for student %d\n",i);
        scanf("%f""%f""%f""%f", &A,&CT,&MS,&ES);
        if((0<=A && A<=40)&&(0<=CT && CT<=20)&&(0<=MS && MS<=60)&&(0<=ES && ES<=100))
            {
               printf("Student %d\n",i);
        float sum;
        sum=(A*10/40)+(CT*20/20)+(MS*30/60)+(ES*40/100);
        /* While calculating the total marks for a student I have consider the weightage of the marks of Attendance as 10%, Class Test as 20%,
        Mid Semester as 30%, End Semester as 40% as per the guide lines. */
        printf("Total Marks: %f\n", sum);

        if(sum>=90)
        {
            printf("Grade: EX\n");
        }
        else if (80<=sum && sum<90)
        {
            printf("Grade: A\n");
        }
        else if (70<=sum && sum<80)
        {
            printf("Grade: B\n");
        }
        else if (60<=sum && sum<70)
        {
            printf("Grade: C\n");
        }
        else if (50<=sum && sum<60)
        {
            printf("Grade: D\n");
        }
        else if (35<=sum && sum<50)
        {
            printf("Grade: P\n");
        }
        else
        {
            printf("Grade: F\n");
        }

            }
            else
            {
               printf("Wrong input is given");
            }

    }


}
