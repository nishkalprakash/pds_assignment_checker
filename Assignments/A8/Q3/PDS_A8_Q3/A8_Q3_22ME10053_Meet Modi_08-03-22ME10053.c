/*
Name-Modi Meet
Roll no-22ME10053
lAB QUES-08-03
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
    char rollno[10];
    float marks[3];
    float total;
};

int main(){
    int n;
    printf("Enter the no of students : \n");
    scanf("%d",&n);
    struct student *A;
    A = (struct student*)malloc(n*sizeof(struct student));
    int i,j,k;
    for(i=0;i<n;i++){
        scanf("%s",(A+i)->rollno);
        for(j=0;j<3;j++){
            scanf("%f",&((A+i)->marks[j]));
        }
        (A+i)->total = (A+i)->marks[0] + (A+i)->marks[1] + (A+i)->marks[2];
    }
    float temp;
    float t;
    char str[10];
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if((A+j)->total < (A+j+1)->total){

                strcpy(str,(A+j)->rollno);
                strcpy((A+j)->rollno,(A+j+1)->rollno);
                strcpy((A+j+1)->rollno,str);

                for(k=0;k<3;k++){
                    t = (A+j)-> marks[k];
                    (A+j)-> marks[k] =(A+j+1) -> marks[k];
                    (A+j+1) -> marks[k] = t;
                }

                temp = (A+j)-> total;
                (A+j)->total = (A+j+1)->total;
                (A+j+1)->total = temp;
            }
        }
    }

    printf("Sorted Student Records :\n");
    for(i=0;i<n;i++){
        printf("Roll No : %s \n",(A+i)->rollno);
        printf("Marks : %.2f %.2f %.2f \n", (A+i)-> marks[0],(A+i)-> marks[1],(A+i)-> marks[2]);
        printf("Total : %f \n",(A+i)->total);
    }

    return 0;
}
