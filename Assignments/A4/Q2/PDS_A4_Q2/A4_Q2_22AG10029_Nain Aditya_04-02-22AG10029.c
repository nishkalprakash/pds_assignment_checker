#include<stdio.h>
 /*section - 2
    Name - Nain Aditya
    Roll - 22AG10029
    LAB NO - 4
    ASSIGNMENT NO - 2
    PROGRAM - taking input of the student data and display their grade*/
 int main(){int a;
     printf("enter the no of students \n");//takes the input of the no of students or no. of times the loop will go on.
     scanf("%d",&a);
     for (int i=1;i<=a;i++){float a1,a2,a3,a4,sum,x=1;
        printf("enter the marks for student %d \n",i);
        printf("Attendance [40] = ");//takes the input
        scanf("%f",&a1);
        printf("\n");
        if (a1<0 || a1>40)//checks whether the input is valid
           {printf("INVALID INPUT \n");
           while (x>0){
                   printf("Attendance [40] = ");//retakes the input if the input invalid
                   scanf("%f",&a1);
                   if (a1>0 && a1 < 40){break;}}}//breaks the loop
        printf("CT [20] = ");
        scanf("%f",&a2);
        printf("\n");
        if (a2<0 || a2>20)
           {printf("INVALID INPUT \n");
            while (x>0){printf("class test [20] = ");
                   scanf("%f",&a3);
                   if (a2>0 && a2 <= 20){break;}}}
        printf("mid sem [60] = ");
        scanf("%f",&a3);
        printf("\n");
        if (a3<0 || a3>60)
           {printf("INVALID INPUT\n");
            while (x>0){printf("mid sem [60] = ");
                   scanf("%f",&a4);
                   if (a3>0 && a3 < 60){break;}}}
        printf("end sem [100] = ");
        scanf("%f",&a4);
        printf("\n");
        if (a4<0 || a4>100){
           printf("INVALID INPUT\n");
           while (x>0){printf("end sem [100] = ");
                   scanf("%f",&a4);
                   if (a4>0 && a4 <= 100) break;}}
        sum=(((a1+a2+a3+a4)/220)*100);//calculates the total marks of the student out of 100
        printf("total marks = %f \n",sum);
        if(sum>=90){//prints the grade as per the condition
        printf ("grade = EX");}
        else if(sum>=80){
        printf ("grade = A");}
        else if(sum>=70){
        printf ("grade = B");}
        else if (sum>=60){
        printf ("grade = C");}
        else if(sum>=50){
        printf ("grade = D");}
        else if(sum>=35){
        printf ("grade = P");}
        else {printf ("grade = F");}
        printf("\n");
        }
  return 0;
 }
