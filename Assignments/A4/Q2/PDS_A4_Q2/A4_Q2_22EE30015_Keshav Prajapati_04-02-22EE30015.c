/*
Section 2
Roll no. 22EE30015
Name : Keshav Prajapati
Assignment No. 4
Description : To find marks of a student and print his/her grade
*/

#include<stdio.h>
int main()
{
    int num_of_students;
    float total_marks, attendence, class_test, midsem, endsem;
    printf("Enter the number of students : ");
    scanf("%d", &num_of_students);

    for(int i = 1; i <= num_of_students; i++)
    {
        //To take input about academic information of student
        printf("\nEnter marks for student %d \n", i);

        printf("Attendence [40] : ");
        scanf("%f", &attendence);
        if(attendence < 0 && attendence >40)// If block is added to check if marks is entered in the correct range or not
        {
            printf("Enter valid attendence marks out of 40 : ");
            scanf("%f", &attendence);
        }

        printf("Class Test [20] : ");
        scanf("%f", &class_test);
        if(class_test < 0 && class_test >20)
        {
            printf("Enter valid class test marks out of 20 : ");
            scanf("%f", &class_test);
        }

        printf("Midsem [60] : ");
        scanf("%f", &midsem);
        if(midsem < 0 && midsem > 60)
        {
            printf("Enter valid midsem marks out of 60 : ");
            scanf("%f", &midsem);
        }

        printf("Endsem [100] : ");
        scanf("%f", &endsem);
        if(endsem < 0 && endsem > 100)
        {
            printf("Enter valid endsem marks out of 100 : ");
            scanf("%f", &endsem);
        }

        //To find total marks of student
        total_marks = 10*attendence/40 + 20*class_test/20 + 30*midsem/60 + 40*endsem/100;
        printf("Total Marks : %f \n", total_marks);

        //To print grade awarded according to achieved marks
        if(total_marks >= 90)
            printf("Grade : EX\n");
        else if(total_marks >= 80 && total_marks < 90)
            printf("Grade : A\n");
        else if(total_marks >= 70 && total_marks < 80)
            printf("Grade : B\n");
        else if(total_marks >= 60 && total_marks < 70)
            printf("Grade : C\n");
        else if(total_marks >= 50 && total_marks < 60)
            printf("Grade : D\n");
        else if(total_marks >= 35 && total_marks < 50)
            printf("Grade : P\n");
        else
            printf("Grade : F\n");
    }

    return 0;
}
