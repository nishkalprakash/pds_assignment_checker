/*
* Section 2
* Roll No : 22ME10015
* Name : Ayush Chanderia
* Assignment No : 4
* Description : Program to calculate the total marks and display the grade awarded.
*/
#include <stdio.h>
int main(){
    int ns; // for storing the total number of students for which marks are supposed to be entered
    double attend; // to store the attendance obtained out of 40
    double ct;  // to store the marks obtained in class test out of 20
    double midsem;   // to store the marks obtained in midsem out of 60
    double endsem;  // to store the marks obtained in endsem out of 100
    double totm;   //

    printf("Enter the number of students:");
    scanf("%d", &ns);
    for(int i=1;i<=ns;i++){
        printf("Enter marks for student:%d\n",i);
        printf("Attendance [40]:\t");
        scanf("%lf", &attend);
        if(attend<0 || attend >40 ){
            while(attend<0 || attend > 40){
                    printf("Attendance [40]:\t");
                    scanf("%lf", &attend);
            }
        }
        printf("CT [20]:\t");
        scanf("%lf",&ct);
        if((ct<0)||(ct>20)){
            while((ct<0)||(ct>20)){
                    printf("CT [20]:\t");
                    scanf("%lf", &ct);
            }
        }
        printf("Midsem [60]:\t");
        scanf("%lf",&midsem);
        if((midsem<0)||(midsem>60)){
            while((midsem<0)||(midsem>60)){
                    printf("Midsem [60]:\t");
                    scanf("%lf", &midsem);
            }
        }
        printf("Endsem [100]:\t");
        scanf("%lf",&endsem);
        if((endsem<0)||(endsem>100)){
            while((endsem<0)||(endsem>100)){
                    printf("Endsem [100]:\t");
                    scanf("%lf", &endsem);
            }
        }


        totm= ((attend/40.0)*10)+((ct/20.0)*20)+((midsem/60.0)*30)+((endsem/100.0)*40);
         printf("Total marks: %lf\t\n",totm);
        if(totm>=90.0){
            printf("Grade: EX\n");
        }
        else if(totm>=80 && totm<90){
            printf("Grade: A\n");
        }
        else if(totm>=70 && totm<80){
            printf("Grade: B\n");
        }
        else if(totm>=60 && totm<70){
            printf("Grade: C\n");
        }
        else if(totm>=50&& totm<60){
            printf("Grade: D\n");
        }
        else if(totm>=35 && totm<50){
            printf("Grade: P\n");
        }
        else
            printf("Grade: F\n");


    }
    return 0;






}
