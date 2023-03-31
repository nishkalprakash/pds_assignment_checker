/*
Section 2
Roll No. - 22CS30016
Name - Omkar Vijay Bhandare
Assignment No. - 04
Description - Program for students performance
*/
#include<stdio.h>
int main()
{
    int n;
    int attend, ct, midsem, endsem;
    float marks;
    printf("Enter number of students : ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        do
        {
            printf("Enter the marks for student %d: \n", i);
            printf("Attendance[40]: \n");
            scanf("%d",&attend);
            printf("CT[20]: \n");
            scanf("%d",&ct);
            printf("Midsem[60]: \n");
            scanf("%d",&midsem);
            printf("Endsem[100]: \n");
            scanf("%d",&endsem);

            if(attend<0||ct<0||midsem<0||endsem<0||attend>40||ct>20||midsem>60||endsem>100)
            {
                printf("You have invalid input; Re-enter data");
            }

        }
        while(attend<0||ct<0||midsem<0||endsem<0||attend>40||ct>20||midsem>60||endsem>100);


        marks = ((float) attend*10.0/40.0)+((float) ct*20.0/20.0)+((float) midsem*30.0/60.0)+((float) endsem*40.0/100.0);
        printf("Student %d\n", i);
        printf("Total marks = %.2f\n", marks);

        if(marks>=90) printf("Grade : EX\n");
        else if(marks>=80) printf("Grade : A\n");
        else if(marks>=70) printf("Grade : B\n");
        else if(marks>=60) printf("Grade : C\n");
        else if(marks>=50) printf("Grade : D\n");
        else if(marks>=35) printf("Grade : P\n");
        else printf("Grade : F\n");

    }
    return 0;
}

