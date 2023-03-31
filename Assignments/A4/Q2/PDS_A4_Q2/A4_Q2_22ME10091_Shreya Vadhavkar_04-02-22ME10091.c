/*Section 2
Roll no.: 22ME10091
Name: Shreya Vadhavkar
Assignment : 4
Description: Calculating grade */
#include<stdio.h>
int main()
{
    int n;//variable storing no. of students
    float midsem;//stores midsem marks
    float endsem;// stores endsem marks
    float att;//stores attendance marks
    float ct;//stores class test marks
    printf("\nEnter number of students:");//request user for no. of students
    scanf("%d", &n);// input no. ofstudents
    int i= 1;
    for(i=1; i<=n; ++i)//initialize for loop variable to 1
    {
        printf("\nEnter the marks for student %d:",i);//input all the marks
        printf("\nAttendance[40]:");
        scanf("%f", &att);
        printf("CT[20]:");
        scanf("%f", &ct);
        printf("Midsem[60]:");
        scanf("%f", &midsem);
        printf("Endsem[100]:");
        scanf("%f", &endsem);
        if((att<0)||(midsem<0)||(endsem<0)||(ct<0)||(att>40)||(midsem>60)||(endsem>100)||(ct>20))//check for invalid marks
        {
            printf("\nInvalid marks.");
            goto line;
        }
        float patt = (10*att)/40;//convert all marks to their weighed marks
        float pmidsem = (30*midsem)/60;
        float pendsem = (40*endsem)/100;
        float pct = (20*ct)/20;
        float total = patt + pmidsem + pendsem + pct;//calculate total percentage
        printf("\nStudent %d", i);
        printf("\nTotal marks : %f", total);//output total marks
        if(total>=90.0)//determine the grade
        {
            printf("\nGrade: EX");
        }
        else if((total>=80))
        {
            printf("\nGrade:A");
        }
        else if((total>=70))
        {
            printf("\nGrade:B");

        }
        else if((total>=60))
        {
            printf("\nGrade:C");
        }
        else if((total>=50))
        {
            printf("\nGrade:D");
        }
        else if(total>=35)
        {
            printf("\nGrade:P");
        }
        else
        {
            printf("\nGrade:F");
        }
    }
    line : return 0;
}
