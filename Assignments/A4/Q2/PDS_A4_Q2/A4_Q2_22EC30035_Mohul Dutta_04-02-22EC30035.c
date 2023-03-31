/*
SECTION 2
ROLL NO 22EC30035
NAME  MOHUL DUTTA
Assignment no. 4

Description to give marks and grade of student
*/
#include<stdio.h>
int main(){
int n;//no. of students
int at,ct,ms,es;//at=attendance,ct=class test,ms=midesem,es=endsem
float marks=0.0;
printf("Enter the number of students: ");
scanf("%d",&n);//inputs no. of student
printf("\n");
for(int i=1;i<=n;i++){
    printf("Enter the marks for student %d\n",i);
    printf("   Attendance [40]: ");
    scanf("%d",&at);//entering the respective variable value
    while(at<0 || at>40){
        printf("Enter again");
        scanf("%d",&at);//incase if wrong input given
    }
    printf("   CT [20]: ");
    scanf("%d",&ct);
    while(ct<0 || ct>20){
        printf("Enter again");
        scanf("%d",&ct);
    }
    printf("   Midsem [60]: ");
    scanf("%d",&ms);
    while(ms<0 || ms>60){
        printf("Enter again");
        scanf("%d",&ms);
    }
    printf("   Endsem [100]: ");
    scanf("%d",&es);
    while(es<0 || es>100){
        printf("Enter again");
        scanf("%d",&es);
    }
    printf("\n");
    marks=100.0*(0.1*(at/40.0)+0.2*(ct/20.0)+0.3*(ms/60.0)+0.4*(es/100.0));//finding the marks of the student
    printf("Student %d\n",i);
    printf("    Total marks: %0.2f\n",marks);
    if(marks>=90.0)
        printf("    Grade: EX");//giving him ex if above 90
    else if(marks>=80.0 && marks<90.0)
        printf("    Grade: A");//A if between 80 and 89
    else if(marks>=70.0 && marks<80.0)
        printf("    Grade: B");//B if between 70 and 79
    else if(marks>=60.0 && marks<70.0)
        printf("    Grade: C");//C if between 60 and 69
    else if(marks>=50.0 && marks<60.0)
        printf("    Grade: D");//D if between 50 and 59
    else if(marks>=35.0 && marks<50.0)
        printf("    Grade: P");//P if between 35 and 49
    else if(marks<35.0)
        printf("    Grade: F");//F otherwise
    printf("\n\n");
}
}
