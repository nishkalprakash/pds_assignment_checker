#include<stdio.h>
/*
Section 2
Roll No: 22HS10018
Name: Dilip Kumar Rewar
Assignment No: 4
Description: Program to grade students for their marks
*/
int main()
{
    int students,attendance,CT,Midsem,Endsem;
    float Total_Marks;
    printf("Number of Students:",students);
    scanf("%d", &students);
    for(int i=0;i<students;i++)
    {
        printf("Enter the marks for student %d:\n",i+1);
        printf("Attendance[40]:",i+1);//Marks for attendance
        scanf("%d",&attendance);
        printf("CT[20]:",i+1);//Marks for Class Test
        scanf("%d",&CT);
        printf("Midsem[60]:",i+1);//Marks for Midsem
        scanf("%d",&Midsem);
        printf("Endsem[100]:",i+1);//Marks for Endsem
        scanf("%d",&Endsem);
        Total_Marks=(22/40)*attendance+(44/20)*CT+(66/60)*Midsem+(88/100)*Endsem;//To get marks out of 100

        if((attendance<0) || (attendance>40) || (CT<0) || (CT>20) || (Midsem<0) || (Midsem>60) || (Endsem<0) || (Endsem>100)){
            printf("Invalid Input\n");
            continue;
        }
        else{
            printf("Total Marks:%f\n",Total_Marks);
            //displaying of grades according to their marks
        if(Total_Marks>=90){
            printf("Grade: Ex");
        }
        else if(Total_Marks<90 && Total_Marks>=80){
        printf("Grade: A\n");
        }
        else if(Total_Marks<80 && Total_Marks>=70){
        printf("Grade:B\n");
        }
        else if(Total_Marks<70 && Total_Marks>=60){
            printf("Grade:C\n");
        }
        else if(Total_Marks<60 && Total_Marks>=50){
            printf("Grade:D\n");
        }
        else if(Total_Marks<50 && Total_Marks>=35){
            printf("Grade:P\n");
        }
        else{
            printf("Grade:F\n");
        }
        }
    }
    return 0;
}
