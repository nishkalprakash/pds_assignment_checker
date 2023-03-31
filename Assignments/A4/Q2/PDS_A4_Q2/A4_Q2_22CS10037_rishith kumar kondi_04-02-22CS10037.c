/*
*section 2
*Roll no:22CS10037
*Name:22CS10037
*Assignment no:4
*description:program to find grades of the required number students
*/
#include<stdio.h>
int main()
{
    int i,n,es,ms,marks,ct,a,A,k,b,c,d,e,CT,MS,ES;
    printf("enter the number of students");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

        printf("enter the marks of the student %d",i);
        printf("Attendence[40]:");
        while(k>=0)
        {
            scanf("%d",&a);
            if(a>=0&&a<=40){
                A=a;k=-2;}

                else{
                 printf("wrong input");}
                k++;
        }
        printf("CT[20]:");
        while(b>=0)
        {
            scanf("%d",&ct);
            if(ct>=0&&ct<=20){
                CT=ct;b=-2;}

                else{
                 printf("wrong input");}
                b++;
        }
        printf("Midsem[60]:");
        while(c>=0)
        {
            scanf("%d",&ms);
            if(ms>=0&&ms<=60){
                MS=ms;c=-2;}

                else{
                 printf("wrong input");}
                c++;
        }
        printf("end sem[100]:");
        while(d>=0)
        {
            scanf("%d",&es);
            if(es>=0&&es<=100){
                ES=es;;d=-2;}

                else{
                 printf("wrong input");}
                d++;
        }
        marks=A/10 +CT+MS/2+ES/2;
            if( marks >=90)
            {
                printf("the student %d grade is EX\n the total marks are %d",i,marks);
            }

            else if(marks >=80 && marks<90)
            {
                printf("the student %d grade is A\n the total marks are %d",i,marks);
            }

            else if(marks>=70 && marks<80)
            {
                printf("the student %d grade is B\n the total marks are %d",i,marks);
            }
            else if(marks>=60 && marks<70)
            {
                printf("the student %d grade is c\n the total marks are %d",i,marks);
            }
            if(marks>=50 && marks<60)
            {
                printf("the student %d grade is D\n the total marks are %d ",i,marks);
            }
            if(marks>=35 && marks<50)
            {
                printf("the student %d grade is F\n the total marks are %d",i,marks);
            }
            if(marks<35)
            {
                printf("the student %d grade is F\n the total marks are %d",i,marks);
            }
            k=0;
            b=0;
            c=0;
            d=0;
    }
}