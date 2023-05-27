/*
*Section 2
*Name: Sagarneel Ghoshal
*Roll No.:22PH10040
*Assignment-8
*Description- Complex Number
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct student{
    char RollNo[10];
    float marks[3];
    float total;
};

int main(){
    int n,i;
    struct student temp;
    printf("Enter number of records: ");
    scanf("%d",&n);
    struct student datas[n];

    for(i=0;i<n;i++){
            printf("\nEnter roll no. of student %d: ",i+1);
            scanf("%s",datas[i].RollNo);
            datas[i].total=0;
            for(int k=0;k<3;k++){
                printf("\nEnter marks of subject %d: ",k+1);
                scanf("%f",&datas[i].marks[k]);
                datas[i].total+=datas[i].marks[k];
            }
    }

    printf("\nStudents Records:");
    for(i=0;i<n;i++){
        printf("\nRoll No.: %s",datas[i].RollNo);
        printf("\nMarks: ");
        for(int k=0;k<3;k++){
            printf("%f  ",datas[i].marks[k]);
        }
        printf("\nTotal: %f",datas[i].total);
    }

    float max;
    int j;
    for(i=0;i<n;i++){
        //max=datas[i].total;
        for(j=i+1;j<n;j++){
            if(datas[i].total< datas[j].total){

        temp=datas[i];
        datas[i]=datas[j];
        datas[j]=temp;
    }
        }
    }

    printf("\n\nSorted students Records:");
    printf("\nStudents Records:");
    for(i=0;i<n;i++){
        printf("\nRoll No.: %s",datas[i].RollNo);
        printf("\nMarks: ");
        for(int k=0;k<3;k++){
            printf("%f  ",datas[i].marks[k]);
        }
        printf("\nTotal: %f",datas[i].total);
    }




   return 0;
}
