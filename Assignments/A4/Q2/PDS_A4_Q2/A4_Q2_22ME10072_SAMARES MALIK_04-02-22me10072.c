/*
section - 2
roll no: 22ME10072
name: Samares Malik
assignment - 04
description
*/
#include<stdio.h>
int main(){
    float marks;
    int N;
    printf("Enter the number of students:"); //taking input for number of students
    scanf("%d",&N);
    for (int i = 1; i<=N; i++){
        float att,ct,ms,es;
        printf("\nEnter the marks for student %d",i);
        //taking inputs for different components of marks
        printf("\nAttendance[40]:");
        scanf("%f",&att);
        if ((att<0)||(att>100)){
            printf("The entered marks are either invalid or more then full marks obtained...\n");
            continue;
        }
        printf("\nCT[20]:");
        scanf("%f",&ct);
        if ((ct<0)||(ct>100)){
            printf("The entered marks are either invalid or more then full marks obtained...\n");
            continue;
        }
        printf("\nMidsem[60]:");
        scanf("%f",&ms);
        if ((ms<0)||(ms>100)){
            printf("The entered marks are either invalid or more then full marks obtained...\n");
            continue;
        }
        printf("\nEndsem[100]:");
        scanf("%f",&es);
        if ((es<0)||(es>100)){
            printf("The entered marks are either invalid or more then full marks obtained...\n");
            continue;
        }
        marks = (att/4)+(ms/2)+ct+(es/2.5);//calculation of the marks according to weightage
        if ((marks<0)||(marks>100)){
            printf("The entered marks are either invalid or more then full marks obtained...\n");
            continue;
        }
        printf("Total marks:%f \n",marks);
        /*checking for the grade accordingly*/
        if (marks>=90){
            printf("Grade:Ex");
        }
        else if((marks<90)&&(marks>=80)){
            printf("Grade:A");
        }
        else if((marks<80)&&(marks>=70)){
            printf("Grade:B");
        }
        else if((marks<70)&&(marks>=60)){
            printf("Grade:C");
        }
        else if((marks<60)&&(marks>=50)){
            printf("Grade:D");
        }
        else if((marks<50)&&(marks>=35)){
            printf("Grade:P");
        }
        else if(marks<35){
            printf("Grade:F");
        }
    }
    return 0;




}
