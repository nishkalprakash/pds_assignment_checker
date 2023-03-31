//Roll no : 22MT10050
//Name : Shivee Gupta
//LAB : 4
//Q2 : to calculate the grade of n students
#include<stdio.h>
int main()
{
    int N,i;

    printf("Enter the number of students : ");
    scanf("%d",&N);
    int a1,c1,m1,e1;
    float tm1;
    for(i=1;i<=N;i++){
        printf("Enter the marks for student %d :\n",i);
        printf("Attendance [40] : ");
        scanf("%d",&a1);
        while(a1<0 || a1>40) {printf("Wrong input! Enter again :\n");
        printf("Attendance [40] : ");
        scanf("%d",&a1);}
        printf("class test [20] : ");
        scanf("%d",&c1);
        while(c1<0 || c1>20) {printf("Wrong input! Enter again :\n");
        printf("class test [20] : ");
        scanf("%d",&c1);}
        printf("mid sems [60]: ");
        scanf("%d",&m1);
        while(m1<0 || m1>60) {printf("Wrong input! Enter again :\n");
        printf("mid sems : ");
        scanf("%d",&m1);}
        printf("end sems [100] : ");
        scanf("%d",&e1);
        while(e1<0 || e1>100) {printf("Wrong input! Enter again :\n");
        printf("end sems : ");
        scanf("%d",&e1);}
        tm1 = (a1/40.0)*10 + (c1/20.0)*20 + (m1/60.0)*30 + (e1/100.0)*40;
        printf("Student 1 : ");
        printf("Total marks : %f\n",tm1);
        if (tm1>=90)
            printf("EX\n");
        else if(tm1>=80) printf("A\n");
        else if (tm1>=70) printf("B\n");
        else if (tm1>=60) printf("C\n");
        else if (tm1>=50) printf("D\n");
        else if (tm1>=35) printf("P\n");
        else printf("F\n");
    }
    return 0;
}
