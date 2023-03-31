/*
* Section 2
* Roll no : 22EE10036
* Name : Krishna Paikine
* Assignment No : 4
* Description : Program to calculate Marks and Grade of students
*/
#include<stdio.h>
int main()
{
    int n, i, AT, CT, MS, ES; //"i" is declared for for-loop.
    double Total;
    printf("Enter the number of students whose result is to be calculated :\n"); //Number of students can vary from 0 to 10.
    scanf("%d", &n);
    for(i=1; i<=n; i++) // For loop for repeating the program for more than 1 student.
    {
        printf("Enter Attendance marks out of [40] for student %d\n (Caution : 0 <= Marks <= 40) \n", i);
        scanf("%d", &AT);
        if(AT < 0 || AT > 40) //With these if statements wrong input is identified and the program is closed.
        {
            printf("Wrong Input!\n Enter the marks again!\n");
            break;
        }
        printf("Enter Class Test marks out of [20] for student %d\n (Caution : 0 <= Marks <= 20)\n", i);
        scanf("%d", &CT);
        if(AT < 0 || CT > 20) //With these if statements wrong input is identified and the program is closed.
        {
            printf("Wrong Input!\n Enter the marks again!\n");
            break;
        }
        printf("Enter Midsem marks out of [60] for student %d\n (Caution : 0 <= Marks <= 60)\n", i);
        scanf("%d", &MS);
        if(AT < 0 || MS > 60) //With these if statements wrong input is identified and the program is closed.
        {
            printf("Wrong Input!\n Enter the marks again!\n");
            break;
        }
        printf("Enter Endsem marks out of [100] for student %d\n (Caution : 0 <= Marks <= 100)\n", i);
        scanf("%d", &ES);
        if(AT < 0 || ES > 100) //With these if statements wrong input is identified and the program is closed.
        {
            printf("Wrong Input!\n Enter the marks again!\n");
            break;
        }

        Total = (AT*10.00/40.00 + CT*20.00/20.00 + MS*30.00/60.00 + ES*40.00/100.00);
        printf("Total marks obtained by student %d = %f\n", i, Total); // Calculates and prints total marks.

       if(Total >= 90.000000){
            printf("Grade obtained by student %d = EX\n", i);
        }
        else if(Total > 80.000000 && Total <= 90.000000){
            printf("Grade obtained by student %d = A\n", i);
        }
         else if(Total > 70.000000 && Total <= 80.000000){
            printf("Grade obtained by student %d = B\n", i);
        }
         else if(Total > 60.000000 && Total <= 70.000000){
            printf("Grade obtained by student %d = C\n", i);
        }
         else if(Total > 50.000000 && Total <= 60.000000){
            printf("Grade obtained by student %d = D\n", i);
        }
         else if(Total > 35.000000 && Total <= 50.000000){
            printf("Grade obtained by student %d = P\n", i);
        }
         else if(Total < 35.000000)
        {
            printf("Grade obtained by student %d = F\n", i);
        } //If statements for printing correct grade based on marks.
    }
    return 0;
}




