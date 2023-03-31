/*
* Section 2
* Roll No.: 22NA30019
* Name : Kavita Thakur
* Assignment No.: 4
* Description : Calculating total marks of different number of students.
*/
#include<stdio.h>
int main(){
    int n;               //number of students
    printf("Enter the number of students :\n ");
    scanf("%d",&n);
    float A,CT,MS,ES; //A stands for attendance,CT for class test,MS for midsem,ES for endsem.
     for(int i=1;i<=n;i++){
        printf("Enter the marks for student %d \n",i);
        printf("Attendance [40]: \n");
        scanf("%f",&A);
        printf("class test [20]: \n");
        scanf("%f",&CT);
        printf("Midsem [60]: \n");
        scanf("%f",&MS);
        printf("Endsem [100]: \n");
        scanf("%f",&ES);

        float tm;    //tm stands for total marks
        tm=(A*10)/40+(CT*20)/20+(MS*30)/60+(ES*40)/100;
        printf("Total marks:%f \n",tm);

     if(A>=0 && A<=40 && CT<=20 && CT>=0 && MS>=0 && MS<=60 && ES>=0 && ES<=100){


        if(tm>=90){
            printf("Grade:EX \n");
        }
        else if(tm>=80 && tm<90){
            printf("Grade:A \n");
        }
        else if(tm>=70 && tm<80 ){
            printf("Grade:B \n");
        }
        else if(tm>=60 && tm<70){
            printf("Grade:C \n");
        }
        else if(tm>=50 && tm<60){
            printf("Grade:D \n");
        }
        else if(tm>=35 && tm<50){
            printf("Grade:P \n");
        }
        else if(tm<35){
            printf("Grade:F \n");
        }
     }
     else{
        printf(" marks entered are out of range");
     }
   }

return 0;
}

