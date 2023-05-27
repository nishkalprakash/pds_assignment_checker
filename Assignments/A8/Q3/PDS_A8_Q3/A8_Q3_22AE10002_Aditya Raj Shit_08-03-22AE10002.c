/*
*Name-Aditya Raj Shit
*Roll no.-22AE10002
*Section-2
*Question-3
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    char RollNo[10];
    float marks[3];
    float total;
}Student;

int main()
{
    int n;
    printf("Enter the number of student data you want to enter : ");
    scanf("%d",&n);
    Student* s;
    s=(Student*)malloc(n*sizeof(Student));

    //getting user input
    for(int i=0;i<n;i++){
        printf("Enter details of student %d: ",i+1);
        printf("\nRoll no.: ");
        scanf("%s",s[i].RollNo);
        printf("Enter marks of three subjects separated by space: ");
        s[i].total=0;
        for(int j=0;j<3;j++){
            scanf("%f",&s[i].marks[j]);
            s[i].total+=s[i].marks[j];
        }
        printf("\n");
    }



//Sorting students as per their marks
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(s[j].total<s[j+1].total){
                Student dummyS;
                dummyS=s[j];
                s[j]=s[j+1];
                s[j+1]=dummyS;
            }
        }

    }


    //printing student records
    printf("---------Student Records-------------\n");
    printf("Sorted Student Records:\n\n");
    for(int i=0;i<n;i++){
        printf("Roll No.: %s",s[i].RollNo);
        printf("\nMarks : ");
        for(int j=0;j<3;j++){
           printf("%.2f  ",s[i].marks[j]);
        }
        printf("\nTotal : %.2f",s[i].total);
        printf("\n\n");
    }
}
