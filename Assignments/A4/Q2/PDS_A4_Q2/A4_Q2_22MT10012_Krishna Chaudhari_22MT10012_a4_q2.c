/*
* Section 2
* Roll No : 22MT10012
* Name : Krishna Chaudhari
* Assignment No : 4
* Description :
*/
#include<stdio.h>
int main()
{
    int i=1,o=1,n;
    float a,c,m,e;
    double tm;
    printf("Enter the number of students : \n");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("enter the marks for student %d \n",i);
        printf("Attendence [40] : \n");                   // attendence of student
        scanf("%f",&a);
        while(a<0 || a>40)
        {
            printf("wrong input please enter valid marks \n");
            printf("Attendence [40] : \n");                   // attendence of student
            scanf("%f",&a);
        };
        printf("CT [20] : \n");
        scanf("%f",&c);
        while(c<0 || c>20)
        {
            printf("wrong input please enter valid marks \n");
            printf("CT [20] : \n");
            scanf("%f",&c);
        };
        printf("Midsem [60] : \n");
        scanf("%f",&m);
        while(m<0 || m>60)
        {
            printf("wrong input please enter valid marks \n");
            printf("Midsem [60] : \n");
            scanf("%f",&m);
        };
        printf("Endsem [100] : \n");
        scanf("%f",&e);
        while(e<0 || e>100)
        {
            printf("wrong input please enter valid marks \n");
            printf("Endsem [100] : \n");
            scanf("%f",&e);
        };
        tm=a/4+c+m/2+e/2.5;            // calculate the total marks of student
        if(a>40 || c>20 || m>60 || e>100) printf("you entered wrong marks ");      // if user input any wrong marks then it will show this
        else
        {
            printf("student %d \n",i);
            o++;
            printf("total marks : %lf \n",tm);
            if(tm>=90) printf("Grade : EX");
            else if(tm>=80 && tm<90) printf("Grade : A \n");
            else if(tm>=70 && tm<80) printf("Grade : B \n");
            else if(tm>=60 && tm<70) printf("Grade : C \n");
            else if(tm>=50 && tm<60) printf("Grade : D \n");
            else if(tm>=35 && tm<50) printf("Grade : P \n");
            else if(tm<35) printf("Grade : F \n");
        }
        i++;
    }
    return 0;
}

