/*
sec2
name- Omkar Dilip Desai
Roll no - 22MF3IM06
q. no-01
description- operations on complex number  */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>



typedef struct {

char rollno[10];
float marks[3];
float total;

}student;



int main(){

int n;
student *s;
float *t;
student temp;




printf("Enter the number of sudent\n");
scanf("%d",&n);

s=(student *)malloc(n*sizeof(student));
t=(float *)malloc(n*sizeof(float));



for(int i=0;i<n;i++){

    printf("Enter the roll number of student %d\n",i+1);
    scanf("%s",s[i].rollno);
    printf("Enter the marks of studnet %d\n",i+1);
    for(int j=0;j<3;j++){
        scanf("%f",&s[i].marks[j]);
    }

}



for(int i=0;i<n;i++){
    printf("Roll no of student %d is %s \n",i+1,s[i].rollno);
    printf("MARKS :- %f  %f   %f \n",s[i].marks[0],s[i].marks[1],s[i].marks[2]);
    printf("TOTAL : %f\n",s[i].marks[0]+s[i].marks[1]+s[i].marks[2]);
}



for(int i=0;i<n;i++){


            s[i].total=s[i].marks[0]+s[i].marks[1]+s[i].marks[2];



}

printf("AFTER SORTING \n\n");

for(int i=0;i<(n);i++){

    for(int k=i+1;k<n;k++){
        if(s[i].total<s[k].total){

            temp=s[i];
            s[i]=s[k];
            s[k]=temp;
        }
    }



}
printf("HELOOO");

for(int i=0;i<n;i++){
    printf("Roll no  %s \n",i+1,s[i].rollno);
    printf("MARKS :- %f  %f   %f \n",s[i].marks[0],s[i].marks[1],s[i].marks[2]);
    printf("TOTAL : %f\n",s[i].marks[0]+s[i].marks[1]+s[i].marks[2]);
}



}


