/*
Section 2
Roll no: 22EX10002
Name: Aditya D Akolkar
Assignment No: 4
Description: */
#include<stdio.h>
int main()
{
    int i, nos;  //declaration of integer
    double attendence_marks, Test_Marks, Midsem_Marks, Endsem_Marks, Total_marks;

    printf("Enter Number of Students: ");//user input collecting function
    scanf("%d", &nos);
    printf("\n");


    for( i=1; i<=nos; i++) //program logic and output
    {
        printf("Enter Marks of Student %d: \n", i);
        printf("Attendence[40] : ");
        scanf("%lf", &attendence_marks);
        printf("CT[20] : ");
        scanf("%lf", &Test_Marks);
        printf("Midsem [60] : ");
        scanf("%lf", &Midsem_Marks);
        printf("Endsem[100] : ");
        scanf("%lf", &Endsem_Marks);
        printf("\n");

        if(attendence_marks>40 || Test_Marks>20 || Midsem_Marks>60 || Endsem_Marks>100 || attendence_marks<0 || Test_Marks<0 || Midsem_Marks<0 || Endsem_Marks<0)
        {
            i=i;
            printf("Please Enter marks within assigned value\n");
            printf("Enter Marks of Student %d: \n", i);
            printf("Attendence[40] : ");
            scanf("%lf", &attendence_marks);
            printf("CT[20] : ");
            scanf("%lf", &Test_Marks);
            printf("Midsem [60] : ");
            scanf("%lf", &Midsem_Marks);
            printf("Endsem[100] : ");
            scanf("%lf", &Endsem_Marks);
            printf("\n");

            Total_marks = (attendence_marks / 4) + Test_Marks + (Midsem_Marks/2) + (0.4 * Endsem_Marks) ;
            printf("Total marks: %0.2lf", Total_marks);
            printf("\n");

            if((Total_marks>=90))
            {
                printf("Grade: EX\n");
            }
            else if(Total_marks>=80  && Total_marks<90)
            {
                printf("Grade: A\n");
            }
            else if(Total_marks>=70  && Total_marks<80)
            {
                printf("Grade: B\n");
            }
            else if(Total_marks>=60  && Total_marks<70)
            {
                printf("Grade: C\n");
            }
            else if(Total_marks>=50  && Total_marks<60)
            {
                printf("Grade: D\n");
            }
            else if(Total_marks>=40  && Total_marks<50)
            {
                printf("Grade: P\n");
            }
            else if(Total_marks<40)
            {
                printf("Grade: F\n");
            }
            continue;

        }
        else
        {

            Total_marks = (attendence_marks / 4) + Test_Marks + (Midsem_Marks/2) + (0.4 * Endsem_Marks) ;
            printf("Total marks: %0.2lf", Total_marks);
            printf("\n");

            if((Total_marks>=90))
            {
                printf("Grade: EX\n");
            }
            else if(Total_marks>=80  && Total_marks<90)
            {
                printf("Grade: A\n");
            }
            else if(Total_marks>=70  && Total_marks<80)
            {
                printf("Grade: B\n");
            }
            else if(Total_marks>=60  && Total_marks<70)
            {
                printf("Grade: C\n");
            }
            else if(Total_marks>=50  && Total_marks<60)
            {
                printf("Grade: D\n");
            }
            else if(Total_marks>=40  && Total_marks<50)
            {
                printf("Grade: P\n");
            }
            else if(Total_marks<40)
            {
                printf("Grade: F\n");
            }
        }



    }

}