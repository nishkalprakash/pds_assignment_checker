// Section -2
// Roll No - 22ME10053
// Name :Meet Modi
// Assignment - 02
// Description - Program to find the grade of a student

#include<stdio.h>

int main(){
    int N;
    printf("Enter the number of students: ");
    scanf("%d",&N);
    int i;
    float attend,ct,mid,end;
    float total=0;
    char grade;
    char ex='X';
    for(i=1;i<=N;i++){
        total=0;

        printf("\n");
        printf("Enter the marks of student %d :\n",i);
        printf("Attendance[40] :");
        scanf("%f",&attend);
        printf("CT[20] :");                                               //Reading input from user
        scanf("%f",&ct);
        printf("Midsem[60] :");
        scanf("%f",&mid);
        printf("Endsem[100] :");
        scanf("%f",&end);

        while((attend<0 ||attend>40) || (ct<0|| ct>20) || (mid<0 || mid>60) || (end<0 || end>100)){
        printf("Enter the valid input");

        printf("\n");
        printf("Enter the marks of student %d :\n",i);
        printf("Attendance[40] :");
        scanf("%f",&attend);
        printf("CT[20] :");
        scanf("%f",&ct);
        printf("Midsem[60] :");
        scanf("%f",&mid);                                                   //Asking user for valid input
        printf("Endsem[100] :");
        scanf("%f",&end);
        }

        total+= (attend/40)*10 +20*(ct/20) + 30*(mid/60) + 40*(end/100);

        if(total>=90) {grade='E';}
        else if(total<90 && total>=80) grade='A';
        else if(total<80 && total>=70) grade='B';
        else if(total<70 && total>=60) grade='C';
        else if(total<60 && total>=50) grade='D';
        else if(total<50 && total>=35) grade='P';
        else if(total<35) grade='F';

        printf("\n");
        printf("Student %d \n",i);
        printf("Total marks = %f \n",total);
        if(total>=90) printf("Grade : EX \n");                 //Declaring the result of student
        else printf("Grade : %c \n",grade);
    }


    return 0;
}
