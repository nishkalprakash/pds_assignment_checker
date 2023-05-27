#include<stdio.h>
#include<math.h>
/*Nmae -Sumit Kumar
Section-2
Roll no-22CS30056
DESCRIPTION-student*/
typedef struct student{
    char RollNo[10];
    float marks[3];
    float total;
}student;
int main(){
    int n;
     scanf("%d",&n);// for reading the value of n;
    student s[n]; // array to store data
    for(int i=0;i<n;i++){
        scanf(" %s",s[i].RollNo);
        for(int j=0;j<3;j++){
        scanf(" %f",&s[i].marks[j]);
        }
        printf("\n");

    }
    for(int i=0;i<n;i++){
        float t=0;
        for(int j=0;j<3;j++){
          t+=s[i].marks[j];
        }
        s[i].total=t;
    }
    printf("Student Records:\n");
    for(int i=0;i<n;i++){
        printf("Roll No:%s\n",s[i].RollNo);
        printf("Marks:");
        for(int j=0;j<3;j++){
        printf(" %.2f",s[i].marks[j]);
        }
        printf("\nTotal:%.2f\n",s[i].total);
    }
    student temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(s[j].total<s[j+1].total){
               temp=s[j];
               s[j]=s[j+1];
               s[j+1]=temp;
            }
        }
    }

    printf("\n\n");
    printf(" Sorted Student Records:\n");
    printf("Student Records:\n");
    for(int i=0;i<n;i++){
        printf("Roll No:%s\n",s[i].RollNo);
        printf("Marks:");
        for(int j=0;j<3;j++){
        printf(" %.2f",s[i].marks[j]);
        }
        printf("\nTotal:%.2f\n",s[i].total);
    }

 }
