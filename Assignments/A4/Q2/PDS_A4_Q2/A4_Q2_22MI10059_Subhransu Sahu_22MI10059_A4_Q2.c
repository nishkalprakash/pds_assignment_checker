/*
* Section 2
* Roll No : 22MI10059
* Name : Subhransu Sahu
* Assignment No : 4
* Description : Calculate total marks and grade
*/


#include <stdio.h>

int main()
{
    double  a, b, c, d, e;
    int i=1, n;
    printf("Enter the total number of students: ");
    scanf("%d", &n);



    while (i<=n)
    {
        printf("\n");
        printf("\nEnter the marks for student %d:\n", i);
        printf("Attendance [40] : ");
        scanf("%lf", &a);
        printf("CT [20] : ");
        scanf("%lf", &b);
        printf("Midesem [60] : ");
        scanf("%lf", &c);
        printf("Endsem [100] : ");
        scanf("%lf", &e);
        if ( (a<0 || a>40) || (b<0 || b>20) || (c<0 || c>60) || (e<0 || e>100))   //this validates the marks entered by the user
        {
            printf("\nEnter Valid Marks");
            printf("\n");
        }
        else
        {

            d = (0.25*a + 1*b + 0.5*c + 0.4*e);
            printf("\nStudent 1");
            printf("\nTotal Marks: %.2f", d);

            if (d >= 90)
                printf("\nGrade: EX");
            else if ( d >= 80 && d < 90)
                printf("\nGrade: A");
            else if ( d >= 70 && d < 80)
                printf("\nGrade: B");
            else if ( d >= 60 && d<70)
                printf("\nGrade: C");
            else if ( d >= 50 && d < 60)
                printf("\nGrade: D");
            else if ( d >= 35 && d < 50)
                printf("\nGrade: P");
            else if (d<35)
                printf("\nGrade: F");
        }
        i++;

    }


    return 0;
}


// i took variables a b c e to store marks of the students
// i took variable d to use the formula to calculate total marks

