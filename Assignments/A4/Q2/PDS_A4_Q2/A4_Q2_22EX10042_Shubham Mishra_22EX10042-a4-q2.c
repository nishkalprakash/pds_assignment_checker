/*
section 2
shubham mishra
22EX10042
program to find
*/
#include<stdio.h>
int main(){
float attendence,classtest,midsem,endsem,marks;
int N;
printf("enter N");
scanf("%d",&N);
int n=1;
while(n<=N)
{



    printf("enter attendence[40]:");
    scanf("%f",&attendence);
    printf("enter classtest[20]:");
    scanf("%f",&classtest);
    printf("enter midsem[60]:");
    scanf("%f",&midsem);
    printf("enter endsem[100]:");
    scanf("%f",&endsem);

    marks = attendence/4 + classtest + midsem/2 + endsem/100 *40;
    printf("total marks of student %d is %f \n",n,marks);


if (marks>=90)
{
    printf("GRADE EX");
}
else if(marks>=80&&marks<90)
{
    printf("GRADE A");
}
else if(marks>=70&&marks<80)
{
    printf("GRADE b");
}
else if(marks>=60&&marks<70)
{
    printf("GRADE C");
}
else if(marks>=50&&marks<60)
{
    printf("GRADE D");
}
else if(marks>=350&&marks<50)
{
    printf("GRADE E");
}
else if(marks<35)
{
    printf("GRADE F");
}
n+=1;
printf("\n");
}
}
