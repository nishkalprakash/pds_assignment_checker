/*
* SECTION 2
* ROLL NO 22EC30055
* NAME SRISAI
* ASSIGNMENT 4
* DISCRIPTION read marks obtained and calculate grade Q2
*/
#include<stdio.h>
int main()
{
    float i=0,N,S,M ;
    float a,b,c,d ;
    char grade,exp ;
    printf("Enter number of students:");
    scanf("%f",&N);
    S=1 ;
    while(N!=0){
    printf("\nEnter number of students %f :",S);
    i=0 ;
    while(i==0){
    printf("\n Attendence [40]:\t");
    scanf("%f",&a);
    if((a>=0)&&(a<=40)){
       i=1 ;
    }else
    printf("input is incorrect\n");
    }
    i=0 ;
        while(i==0){
    printf("\n CT [20]:\t");
    scanf("%f",&b);
    if((b>=0)&&(b<=20)){
       i=1 ;
    }else
    printf("input is incorrect\n");
    }
    i=0 ;
        while(i==0){
    printf("\n Midsem [60]:\t");
    scanf("%f",&c);
    if((c>=0)&&(c<=60)){
       i=1 ;
    }else
    printf("input is incorrect\n");
    }
    i=0 ;
        while(i==0){
    printf("\n Endsem [100]:\t");
    scanf("%f",&d);
    if((d>=0)&&(d<=100)){
       i=1 ;
    }else
    printf("input is incorrect\n");
    }
    M = (((a/40.0)*10) + ((b/20.0)*20) + ((c/60.0)*30) + ((d/100.0)*40)) ;
    if(M>=90){
        grade = 'E' ;
        exp = 'x' ;
    }else
    if(M>=80)
    {
         grade = 'A' ;
        exp = ' ' ;
    }else
    if(M>=70)
    {
         grade = 'B' ;
        exp = ' ' ;
    }else
    if(M>=60)
    {
           grade = 'C' ;
        exp = ' ' ;
    }else
    if(M>=50)
    {
         grade = 'D' ;
        exp = ' ' ;
    }else
    if(M>=35)
    {
           grade = 'P' ;
        exp = ' ' ;
    }else {
       grade = 'F' ;
        exp = ' ' ;
    }
    printf("\n Student %f\n Total marks : %f\nGrade: %c%c",S,M,grade,exp);
    N = N-1 ;
    S= S+1 ;
}}
