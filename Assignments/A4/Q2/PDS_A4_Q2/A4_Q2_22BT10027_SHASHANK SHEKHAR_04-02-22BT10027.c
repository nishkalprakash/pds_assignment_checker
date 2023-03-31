/*
* Section 2
* Roll No : 22BT10027
* Name : Shashank Shekhar
* Assignment No : 4
* Description : Program to check validity of password
*/
#include<stdio.h>
int main()
{
    int N,a,ct,ms,es;//initialization of variables
    double m=0.0;
    printf("Enter the number of students: \n");
    scanf("%d",&N);
    int i,c=1;
    for(i=1;i<=N;i++)
    {
        printf("Enter the marks of student: %d \n",c);
        do
        {
        printf("Attendance [40]: \n");
        scanf("%d",&a);
        if(a<0||a>40)
            printf("Invalid input \n");
        }while(a<0||a>40);
        do
        {
        printf("CT [20]: \n");
        scanf("%d",&ct);
        if(ct<0||ct>20)
            printf("Invalid input \n");
        }while(ct<0||ct>20);
        do
        {
        printf("Midsem [60]: \n");
        scanf("%d",&ms);
        if(ms<0||ms>60)
            printf("Invalid input \n");
        }while(ms<0||ms>60);
        do
        {
        printf("Endsem [100]: \n");
        scanf("%d",&es);
        if(es<0||es>100)
            printf("Invalid input \n");
        }while(es<0||es>100);
        m = a*0.1/40+ct*0.2/20+ms*0.3/60+es*0.4/100;
        m= m*100;
        printf("Student %d \n",c);
        printf("Total Marks: %lf \n",m);
        if(m>=90)
            printf("Grade: EX");
        else if(m>=80&&m<90)
            printf("Grade: A");
        else if(m>=70&&m<80)
            printf("Grade: B");
        else if(m>=60&&m<70)
            printf("Grade: C");
        else if(m>=50&&m<60)
            printf("Grade: D");
        else if(m>=35&&m<50)
            printf("Grade: P");
        else if(m<35)
            printf("Grade: F");
        c++;
    }
}
