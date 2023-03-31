/*
sec2
name- Omkar Dilip Desai
Roll no - 22MF3Im06
q. no-1
description- To write a programm for password input*/

#include<stdio.h>

int main()
{

    int n,i=1;
    float A,C,Midsem,Endsem,p,q,r,s,t;
    printf("what is number of student\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {

        printf("enter the marks for student %d\n",i);
        do
        {
            printf("Attendence:");
            scanf("%f",&A);
           if(!(A>=0 && A<=40)){
            printf("ENter valid number\n");} /* it will ensure enter of valid inpit*/
        }
        while(!(A>=0 && A<=40));

        p=A/4.0;

        do
        {

            printf("CT:");
            scanf("%f",&C);
           if(!(A>=0 && A<=40)){
            printf("ENter valid number\n");}
        }
        while(!(A>=0 && A<=40));

        q=C/1.0;
        do
        {
            printf("Midsem:");
            scanf("%f",&Midsem);
            if(!(A>=0 && A<=40)){
            printf("ENter valid number\n");}
        }
        while(!(A>=0 && A<=40));

        r=Midsem/2.0;

        do
        {
            printf("End sem:");
            scanf("%f",&Endsem);
            if(!(A>=0 && A<=40)){
            printf("ENter valid number\n");}
        }
        while(!(A>=0 && A<=40));

        s=Endsem*0.4;

        t=p+q+r+s;
        printf("Total marksod student=%f\n",t);

        if(t>=90)
        {
            printf("grades: EX");
        }
        if(t<90 && t>=80)
        {
            printf("grades: A");
        }
        if(t>=70 && t<80)
        {
            printf("grades: B");
        }
        if(t>=60 && t<70)
        {
            printf("grades: C");
        }
        if(t>=60 && t<50)
        {
            printf("grades: D");
        }
        if(t>=35 && t<50)
        {
            printf("grades: D");
        }
        if(t<35)
        {
            printf("grades: F");
        }




    }





    return 0;
}
