/*
* Section 2
* Roll no : 22GG10052
* Name : Vedant Thakare
* Assignment : 5
* Description : Program to return total grade and marks
*/
#include<stdio.h>
int main()
{
    int i;
    float a,b,c,d,n;
    float s;
    printf("Enter the number of students\n");
    scanf("%f",&n);
    for (i=1;i<=n;i++)
    {
        printf("Enter the marks for student %d\n",i);
        printf("Attendance [40] : ");
        scanf("%f",&a);
        printf("CT [20] :");
        scanf("%f",&b);
        printf("Midsem [60] :");
        scanf("%f",&c);
        printf("Endsem [100] :");
        scanf("%f",&d);
        // 's' is the sum of all the marks of students
        s= a/4.0 + b + c/2.0 + d*2.0/5;
        if ((a<0)||(a>40)||(b<0)||(b>20)||(c<0)||(c>60)||(d<0)||(d>100))
        {
            printf("invalid input\n");
            i--;
            continue;
        }
        else
        {
            printf("Student no : %d\n",i);
            printf("Total marks : %.2f\n",s);

        }
        //The below lines are used for printing the grade
        if (s>=90)
        {
            printf("Grade : Ex\n");
        }
        else if (s>=80&&s<90)
        {
            printf("Grade : A\n");
        }
        else if (s>=70&&s<80)
        {
            printf("Grade : B\n");

        }
        else if (s>=60&&s<70)
        {
            printf("Grade : C\n");

        }
        else if (s>=50&&s<60)
        {
            printf("Grade : D\n");
        }
        else if (s>=35&&s<50)
        {
            printf("Grade : P\n");
        }
        else
        {
            printf("Grade : F\n");
        }




    }
    return 0;

}
