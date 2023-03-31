/*
* Section 2
* Roll No : 22AE10002
* Name : Aditya Raj Shit
* Assignment No : 2
* Description : Program to calculate marks and grade of student.
*/

#include<stdio.h>

int main(){
    int n;

    printf("Enter the number of students: ");
    scanf("%d",&n);             //Taking user input
    printf("\n");

    int count=1;
    char grade;
    while(count<=n){                //Running loop till all students marks are not entered
        printf("Enter the marks for student %d",count);     //taking marks from user.

        float at,ct,ms,es;
        while(1){
            printf("\nAttendence [40]: ");      //taking attendence marks.
            scanf("%f",&at);
            if(at>=0 && at<=40){
                    at=(at/40)*10;
                break;
            }
        }

       while(1){
            printf("\nClass test [20]: ");      //taking class test marks.
            scanf("%f",&ct);
            if(ct>=0 && ct<=20){
                ct=(ct/20)*20;
                break;
            }
        }

       while(1){
            printf("\nMid sem [60]: ");
            scanf("%f",&ms);
            if(ms>=0 && ms<=60){
                ms=(ms/60)*30;
                break;
            }
        }

       while(1){
            printf("\nEnd sem [100]: ");
            scanf("%f",&es);
            if(es>=0 && es<=100){
                es=(es/100)*40;
                break;
            }
        }

        float marks=at+ct+ms+es;


        printf("\nStudent %d\n",count);
        printf("    Total marks: %f\n",marks);

        if(marks>=90){                  //Printing grade
            printf("    Grade: Ex\n");
        }

        else if(marks>=80 && marks<90){
            printf("    Grade: A\n");
        }

        else if(marks>=70 && marks<80){
            printf("    Grade: B\n");
        }

        else if(marks>=60 && marks<70){
            printf("    Grade: C\n");
        }

         else if(marks>=50 && marks<60){
            printf("    Grade: D\n");
        }

        else if(marks>=35 && marks<50){
            printf("    Grade: P\n");
        }

        else{
            printf("    Grade: F\n");
        }
        count++;
    }

}
