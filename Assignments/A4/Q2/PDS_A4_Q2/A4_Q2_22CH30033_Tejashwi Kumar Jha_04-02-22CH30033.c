/*
Roll No. -: 22CH30033
Name -: Tejashwi Kumar Jha
Section -: 2
Assignment No. :- 4
Question No. -: 2
Assignment -: Making the report card!
*/
#include<stdio.h>
int main()
{

    float s,n ,a,ct,m,e, marks;
    printf("Enter the no. of students :\n");
    scanf("%f",&s);

    for (n = 1 ; n <= s ; n++)
    {
        printf("\nEnter the marks for student %0.00f :\n",n);

        printf("Attendance [40] :");
        scanf("%f",&a);
        while (a > 40 || a < 0)
        {
            printf("Wrong input \nEnter your marks again !!\n");
            printf("Attendance [40] :");
            scanf("%f",&a);
        }


        printf("CT [20] :");
        scanf("%f",&ct);
        while (a > 20 || a < 0)
        {
            printf("Wrong input \nEnter your marks again !!");
            printf("CT [20] :");
            scanf("%f",&ct);
        }


        printf("Midsem [60] :");
        scanf("%f",&m);
        while (a > 60 || a < 0)
        {
            printf("Wrong input \nEnter your marks again !!");
            printf("Midsem [60] :");
            scanf("%f",&m);
        }


        printf("Endsem [100] :\n");
        scanf("%f",&e);
        while (a > 40 || a < 0)
        {
            printf("Wrong input \nEnter your marks again !!");
            printf("Endsem [100] :\n");
            scanf("%f",&e);
        }

        printf("\nStudent %0.00f \n",n);
        marks = (a*10/40) + (ct*20/20) +(m*30/60) + (e*40/100);
        printf("Total marks : %f \n", marks);

        if ( marks >=90)
        {
            printf("Grade : EX \n");
        }
         if ( marks >=80 && marks <90)
        {
            printf("Grade : A \n");
        }
         if ( marks >=70 && marks <80)
        {
            printf("Grade : B \n");
        }
         if ( marks >=60 && marks <70)
        {
            printf("Grade : C \n");
        }
         if ( marks >=50 && marks <60)
        {
            printf("Grade : D \n");
        }
        if ( marks >=35 && marks <50)
        {
            printf("Grade : P \n");
        }
        if ( marks <35)
        {
            printf("Grade : F \n");
        }

    }
}
