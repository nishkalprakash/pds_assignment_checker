#include <stdio.h>
/*
Section 2
Roll No: 22HS10018
Name: Dilip Kumar Rewar
Assignment No: 8
Description: Storing marks of students
*/
struct student{
    char RollNo[10];
    float marks[3];
    float total;
};
int main(){
    int n, i=0;
    printf("Enter number of students: ");
    scanf("%d",&n);
    float Total[n];
    struct student array[n];
    for(i=0;i<n;i++){
        printf("Enter roll no of student %d: ",i+1);
        scanf("%s",&array[i].RollNo);
        printf("Enter marks of student %d: ",i+1);
        scanf("%f %f %f",&array[i].marks[0],&array[i].marks[1],&array[i].marks[2]);
        Total[i] = array[i].marks[0]+array[i].marks[1]+array[i].marks[2];
        printf("Total marks of student %d is: %f\n",i+1,Total[i]);
    }
    printf("\n");
    if(Total[0]>=Total[1] && Total [0]>=Total[2]){
        if(Total[1]>=Total[2]){
            printf("\nRoll no.=%s",array[0].RollNo);
            printf("\nMarks are: %f %f %f",array[0].marks[0],array[0].marks[1],array[0].marks[2]);
            printf("\nTotal marks: %f",Total[0]);

            printf("\nRoll no.=%s",array[1].RollNo);
            printf("\nMarks are: %f %f %f",array[1].marks[0],array[1].marks[1],array[1].marks[2]);
            printf("\nTotal marks: %f",Total[1]);

            printf("\nRoll no.=%s",array[2].RollNo);
            printf("\nMarks are: %f %f %f",array[2].marks[0],array[2].marks[1],array[2].marks[2]);
            printf("\nTotal marks: %f",Total[2]);
        }
        else{
            printf("\nRoll no.=%s",array[0].RollNo);
            printf("\nMarks are: %f %f %f",array[0].marks[0],array[0].marks[1],array[0].marks[2]);
            printf("\nTotal marks: %f",Total[0]);

            printf("\nRoll no.=%s",array[2].RollNo);
            printf("\nMarks are: %f %f %f",array[2].marks[0],array[2].marks[1],array[2].marks[2]);
            printf("\nTotal marks: %f",Total[2]);

            printf("\nRoll no.=%s",array[1].RollNo);
            printf("\nMarks are: %f %f %f",array[1].marks[0],array[1].marks[1],array[1].marks[2]);
            printf("\nTotal marks: %f",Total[1]);
        }
    }
    if(Total[1]>=Total[0] && Total [1]>=Total[2]){
        if(Total[0]>=Total[2]){
            printf("\nRoll no.=%s",array[1].RollNo);
            printf("\nMarks are: %f %f %f",array[1].marks[0],array[1].marks[1],array[1].marks[2]);
            printf("\nTotal marks: %f",Total[1]);

            printf("\nRoll no.=%s",array[0].RollNo);
            printf("\nMarks are: %f %f %f",array[0].marks[0],array[0].marks[1],array[0].marks[2]);
            printf("\nTotal marks: %f",Total[0]);

            printf("\nRoll no.=%s",array[2].RollNo);
            printf("\nMarks are: %f %f %f",array[2].marks[0],array[2].marks[1],array[2].marks[2]);
            printf("\nTotal marks: %f",Total[2]);
        }
        else{
            printf("\nRoll no.=%s",array[1].RollNo);
            printf("\nMarks are: %f %f %f",array[1].marks[0],array[1].marks[1],array[1].marks[2]);
            printf("\nTotal marks: %f",Total[1]);

            printf("\nRoll no.=%s",array[2].RollNo);
            printf("\nMarks are: %f %f %f",array[2].marks[0],array[2].marks[1],array[2].marks[2]);
            printf("\nTotal marks: %f",Total[2]);

            printf("\nRoll no.=%s",array[0].RollNo);
            printf("\nMarks are: %f %f %f",array[0].marks[0],array[0].marks[1],array[0].marks[2]);
            printf("\nTotal marks: %f",Total[0]);
        }
    }

    if(Total[2]>=Total[0] && Total [2]>=Total[1]){
        if(Total[0]>=Total[1]){
            printf("\nRoll no.=%s",array[2].RollNo);
            printf("\nMarks are: %f %f %f",array[2].marks[0],array[2].marks[1],array[2].marks[2]);
            printf("\nTotal marks: %f",Total[2]);

            printf("\nRoll no.=%s",array[0].RollNo);
            printf("\nMarks are: %f %f %f",array[0].marks[0],array[0].marks[1],array[0].marks[2]);
            printf("\nTotal marks: %f",Total[0]);

            printf("\nRoll no.=%s",array[1].RollNo);
            printf("\nMarks are: %f %f %f",array[1].marks[0],array[1].marks[1],array[1].marks[2]);
            printf("\nTotal marks: %f",Total[1]);
        }
        else{
            printf("\nRoll no.=%s",array[2].RollNo);
            printf("\nMarks are: %f %f %f",array[2].marks[0],array[2].marks[1],array[2].marks[2]);
            printf("\nTotal marks: %f",Total[2]);

            printf("\nRoll no.=%s",array[1].RollNo);
            printf("\nMarks are: %f %f %f",array[1].marks[0],array[1].marks[1],array[1].marks[2]);
            printf("\nTotal marks: %f",Total[1]);

            printf("\nRoll no.=%s",array[0].RollNo);
            printf("\nMarks are: %f %f %f",array[0].marks[0],array[0].marks[1],array[0].marks[2]);
            printf("\nTotal marks: %f",Total[0]);

        }
    }
    return 0;
}
