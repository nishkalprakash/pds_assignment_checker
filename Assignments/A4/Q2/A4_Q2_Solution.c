// Code Creator: NP (nishkal@iitkgp.ac.in)
/*
2.
Write a program to read marks obtained in Attendence, CT, Midsem and endsem for N students.
N will be entered by the user and the marks for each student will be entered by the user.
The program should calculate the total marks and display the grade awarded.
(Assume (no need to check): [0<N<10])
The user will enter the marks in the following order:
    Attendance out of 40,
    CT out of 20,
    Midsem out of 60
    Endsem out of 100.
[Assume that the user will not enter a negative number 
and will always enter the marks below the max.]

WEIGHTAGE: Total Marks = 100
    Attendence: 10%
    CT: 20%
    Midsem: 30%
    Endsem: 40%

Rules for grading
    Ex: Marks >= 90
    A:  80 <= Marks < 90
    B:  70 <= Marks < 80
    C:  60 <= Marks < 70
    D:  50 <= Marks < 60
    P:  35 <= Marks  < 50
    F:  Marks < 35
*/
#include <stdio.h>
int main()
{
    int n, i;                                          // n is the number of students, i is the loop counter
    float attendence, ct, midsem, endsem, total_marks; // stores the marks for each student
    char grade;                                        // stores the grade for each student
    printf("Enter the number of students: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("\nEnter the marks for student %d:\n", i);
        printf("  Attendence [40]: ");
        scanf("%f", &attendence);
        printf("  CT [20]: ");
        scanf("%f", &ct);
        printf("  Midsem [60]: ");
        scanf("%f", &midsem);
        printf("  Endsem [100]: ");
        scanf("%f", &endsem);
        total_marks = (attendence * 10 / 40) + (ct * 20 / 20) + (midsem * 30 / 60) + (endsem * 40 / 100);
        if (total_marks >= 90)
            grade = 'EX';
        else if (total_marks >= 80)
            grade = 'A';
        else if (total_marks >= 70)
            grade = 'B';
        else if (total_marks >= 60)
            grade = 'C';
        else if (total_marks >= 50)
            grade = 'D';
        else if (total_marks >= 35)
            grade = 'P';
        else
            grade = 'F';
        printf("\nStudent %d\n  Total marks: %.2f\n  Grade: %c\n", i,total_marks, grade);
    }
    return 0;
}
