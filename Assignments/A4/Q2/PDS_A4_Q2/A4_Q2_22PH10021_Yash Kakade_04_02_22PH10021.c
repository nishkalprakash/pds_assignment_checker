/*
* Section 2
* Roll No.: 22PH10021
* Name : Kakade Yash Ashok
* Assignment No : 4
* Description : Program to calculate grade of student
*/

#include <stdio.h>

int main()
{
    float Atte,CT,MS,ES,TM; //Variable define
    int N,i;

    printf("Enter the number of students: \n"); // To enter total number of students
    scanf("%d",&N);

    for(i=1;i<=N;i++){

        printf("Enter the marks for student %d: \n",i);

        printf("Attendence marks out of 40: "); //Attendence marks
        scanf("%f",&Atte);
        printf("Class test marks out of 20: "); //class test marks
        scanf("%f",&CT);
        printf("Midsem marks out of 60: "); //midsem marks
        scanf("%f",&MS);
        printf("Endsem marks out of 100: "); // endsem marks
        scanf("%f",&ES);

        TM= Atte*10.0/40 + CT*20/20 + MS*30/60 + ES*40/100; //Total marks considering weightage of each evaluation

        if (Atte>=0 && Atte<=40 && CT>=0 && CT<=20 && MS>=0 && MS<=60 && ES>=0 && ES<=100){ //to enter marks within range

            printf("Student %d \n",i);
            printf("Total marks: %f \n",TM); //to get total marks

            if(TM>=90){
                printf("/nGrade: Ex\n"); // To get the given grades
            }
            else if(TM<90 && TM>=80){
                printf("Grade: A\n");
            }
            else if(TM<80 && TM>=70){
                printf("Grade: B\n");
            }
            else if(TM<70 && TM>=60){
                printf("Grade: C\n");
            }
            else if(TM<60 && TM>=50){
                printf("Grade: D\n");
            }
            else if(TM<50 && TM>=35){
                printf("Grade: P\n");
            }
            else if(TM<35){
                printf("Grade: F\n");
            }



        }
        else{
            printf("\nThe input marks given are invalid\n"); //To get error if input marks are negative
        }



    }

    return 0;
}
