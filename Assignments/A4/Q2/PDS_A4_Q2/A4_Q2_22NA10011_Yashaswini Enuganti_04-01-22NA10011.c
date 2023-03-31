/*
*Section:2
*Roll no.:22NA10011
*Name: Enuganti Yashaswini
*Assignment number-4
*Description:Program to calculate total marks and grade by taking marks of students as input
*/
#include<stdio.h>
int main()
{
    int a,c,m,e,N,i,A,C,M,E;
    float T;
    printf("Enter the number of students,N=");
    scanf("%d",&N);
    printf("%d",N);
    for(i=1;i<=N;i++)
    {
        printf("Marks obtained in Attendance of student-%d:",i);
        scanf("%d",&a);
        if(a>=0&&a<=40)
            A=a;
        printf("%d\n",A);
        printf("Marks obtained in Class test of student-%d:",i);
        scanf("%d",&c);
        if(c>=0&&c<=20)
            C=c;
        printf("%d\n",C);
        printf("Marks obtained in Mid Sem of student-%d:",i);
        scanf("%d",&m);
            if(m>=0&&m<=60)
                M=m;

        printf("%d\n",M);
        printf("Marks obtained in End Sem of student-%d:",i);
        scanf("%d",&e);
         if(e>=0&&e<=100)
                E=e;
        printf("%d\n",E);
        T=(((A*10)/40.0)+((C*20)/20)+((M*30)/60)+((E*40)/100));
        printf("Total marks obtained by student-%d=%lf\n",i,T);
        if(T>=90)
            printf("Grade:EX\n");
        else if((T>=80)&&(T<90))
            printf("Grade:A\n");
        else if((T>=70)&&(T<80))
            printf("Grade:B\n");
        else if((T>=60)&&(T<70))
            printf("Grade:C\n");
        else if((T>=50)&&(T<60))
            printf("Grade:D\n");
        else if((T>=35)&&(T<50))
            printf("Grade:P\n");
        else
            printf("Grade:F\n");
    }

}
