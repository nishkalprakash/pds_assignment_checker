/*
* Section 2
* Roll No.: 22NA30019
* Name : Kavita Thakur
* Assignment No.: 8
* Description :
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct student {
  char RollNo[10];
  float marks[3];
  float total;
}student;

int main(){
    int n;
    float max=0,min=301;
    printf("Enter number of students : ");
    scanf("%d",&n);

    student data[n];

    printf("Enter data of students\n");

    for(int i=0;i<n;i++){
        printf("Enter record of student %d\n",i+1);
        printf("Enter roll no : ");
        scanf("%s",data[i].RollNo);
        printf("Enter marks in three subjects");
        scanf("%f",&data[i].marks[0]);
        scanf("%f",&data[i].marks[1]);
        scanf("%f",&data[i].marks[2]);
    }

    for(int i=0;i<n;i++){
        data[i].total=data[i].marks[0]+data[i].marks[1]+data[i].marks[2];
    }

    printf("Student Records\n");
     for(int i=0;i<n;i++){
        printf("Roll No: %s\n",data[i].RollNo);
        printf("Marks: %.2f %.2f %.2f\n",data[i].marks[0],data[i].marks[1],data[i].marks[2]);
        printf("Total: %.2f\n",data[i].total);
     }


    for(int i=0;i<n;i++){
       if(max<data[i].total){
        max=data[i].total;
       }
    }

    for(int i=0;i<n;i++){
       if(min>data[i].total){
        min=data[i].total;
       }
    }

    printf("Sorted Record\n");

    for(int i=max;i>=min;i--){
        for(int j=0;j<n;j++){
            if(i==data[j].total){
                printf("Roll No: %s\n",data[j].RollNo);
                printf("Marks: %.2f %.2f %.2f\n",data[j].marks[0],data[j].marks[1],data[j].marks[2]);
                printf("Total: %.2f\n",data[j].total);
            }
        }
    }









return 0;}
