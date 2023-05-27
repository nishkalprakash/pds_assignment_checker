/*
* Section 2
* Roll No.: 22PH10021
* Name : Kakade Yash Ashok.
* Assignment No : 8
* Description : To store marks of students & sort Total marks
*/



#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Student{
    char RollNo[10];
    float marks[3];
    float total;

};

int main(){
    int n,i;
    struct Student temp;
    printf("Enter no. of records: ");
    scanf("%d",&n);
    struct Student datas[n];

    for(i=0;i<n;i++){
            printf("\nEnter roll no. of student %d : ",i+1);
            scanf("%s",datas[i].RollNo);
            datas[i].total=0;

            printf("\nEnter marks: ");

            int k=0;
            while(k<3){
                scanf("%f",&datas[i].marks[k]);
                    datas[i].total=datas[i].total+datas[i].marks[k];
                    k++;
            }


    }

    printf("\nStudents records: ");
    for(i=0;i<n;i++){
        printf("\nRoll No.: %s",datas[i].RollNo);
        printf("\nMarks: ");

        int k=0;
        while(k<3){
            printf("\n%f",datas[i].marks[k]);
            k++;
        }
        printf("\nTotal: %f",datas[i].total);
    }

    float max;
    int j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(datas[i].total<datas[j].total){
                temp=datas[i];
                datas[i]=datas[j];
                datas[j]=temp;
            }
        }
    }


    printf("\n\nSorted students record");
printf("\nStudents records: ");
    for(i=0;i<n;i++){
        printf("\nRoll No.: %s",datas[i].RollNo);
        printf("\nMarks: ");
        for(int k=0;k<3;k++){
            printf("\n%f",datas[i].marks[k]);

        }
        printf("\nTotal: %f",datas[i].total);
    }










return 0;
}
