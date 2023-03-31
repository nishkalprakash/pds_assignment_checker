
/*
* Section 2
* Roll No : 22MA10067
* Name : Your Name
* Assignment No : 4
* Description : Program to find magic number
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int N,n=1;
    char G;
    float a,c,m,e,A,C,M,E,ma;
    printf("Enter the number of students:");
    scanf("%d",&N);
    while(N<0){
            printf("Wrong Input! Enter a valid no of students:");
            scanf("%d",&N);}
    while(n<=N){
        printf("\nEnter the marks for student %d",n);
        printf("\nAttendance [40]:");
        scanf("%f",&a);
        while(a<0 || a>40){
            printf("Wrong Input!Enter Valid Value:");
            scanf("%f",&a);
        }

        printf("CT [20]:");
        scanf("%f",&c);
        while(c<0 || c>20){
            printf("Wrong Input!Enter Valid Value:");
            scanf("%f",&c);
        }

        printf("Midsem [60]:");
        scanf("%f",&m);
        while(m<0 || m>60){
            printf("Wrong Input!Enter Valid Value:");
            scanf("%f",&m);
        }

        printf("Endsem [100]:");
        scanf("%f",&e);
        while(e<0 || e>100){
            printf("Wrong Input!Enter Valid Value:");
            scanf("%f",&e);
        }

        printf("\nStudent %d\n",n);

        ma=(a/40)*10+(c/20)*20+(m/60)*30+(e/100)*40;
        printf("Total Marks:%0.2f\n",ma);
        if (ma>=90) {
                printf("Grade:EX\n");}
        else if (ma>=80 && ma<90 ) {
                printf("Grade:A\n");}
        else if (ma>=70 && ma<80) {
                printf("Grade:B\n");}
        else if (ma>=60 && ma<70) {
                printf("Grade:C\n");}
        else if (ma>=50 && ma<60) {
                printf("Grade:D\n");}
        else if (ma>=35 && ma<50) {
                printf("Grade:P\n");}
        else {
                printf("Grade:F\n");}


        n++;

    }

    return 0;

}






















