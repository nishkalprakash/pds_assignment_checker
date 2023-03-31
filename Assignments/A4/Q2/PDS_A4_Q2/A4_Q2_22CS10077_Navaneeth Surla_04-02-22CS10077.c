/*
 Section  2
 Roll No : 22CS10077
 Name : Surla Navaneeth
 Assignment No : 4
 Description : Program to display grades of students
*/
#include<stdio.h>
int main()
{
    float A,C,M,E,m;
    int N,i;
    printf("Enter the number of students: ");
    scanf("%d",&N);
    i = 1;
    while (i <= N)
    {
        printf("Enter the marks for student %d:\n",i);
        printf("Attendance [40]: ");
        scanf("%f",&A);
        printf("CT [20]: ");
        scanf("%f",&C);
        printf("Midsem [60]: ");
        scanf("%f",&M);
        printf("Endsem [100]: ");
        scanf("%f",&E);
        if ( A<0 || A>40 || C<0 || C>20 || M<0 || M>60 || E<0 || E>100 )
        {
            printf("Invalid Input of marks\n");
        }

        else
        {
        m =  (A/40)*10 + (C/20)*20 + (M/60)*30 + (E/100)*40;
        if (m>=90)
           {
            printf("Student %d\n",i);
                printf("Total marks: %f\n",m);
                printf("Grade: EX");
            }
        else if (m<90 && m>=80)
            {
            printf("Student %d\n",i);
                printf("Total marks: %f\n",m);
                printf("Grade: A\n");
            }
        else if (m<80 && m>=70)
            {
            printf("Student %d\n",i);
                printf("Total marks: %f\n",m);
                printf("Grade: B\n");
            }
        else if (m<70 && m>=60)
            {
            printf("Student %d\n",i);
                printf("Total marks: %f\n",m);
                printf("Grade: C\n");
            }
        else if (m<60 && m>=50)
            {
            printf("Student %d\n",i);
                printf("Total marks: %f\n",m);
                printf("Grade: D\n");
            }
        else if (m<50 && m>=35)
            {
            printf("Student %d\n",i);
                printf("Total marks: %f\n",m);
                printf("Grade: P\n");
            }
        else if (m<35)
            {
            printf("Student %d\n",i);
                printf("Total marks: %f\n",m);
                printf("Grade: F\n");
            }
        i++;
        }
    }
}





