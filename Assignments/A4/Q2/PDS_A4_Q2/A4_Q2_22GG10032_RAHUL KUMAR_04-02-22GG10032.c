/*
* Section : 2
* Name : Rahul Kumar
* Roll no. : 22GG10032
* Assignment : 4
* Description : Program for Marks & grade
*/
#include<stdio.h>
int main()
{
 float i,N,a,c,m,e;      //a=attendance, c=classtest,m=midsem,e=endsem
 scanf("%f",&N);
 for(i=1;i<=N;i++){
    printf("enter the a marks(40)\n");
    scanf("%f",&a);
    printf("c marks(20)\n");
    scanf("%f",&c);
    printf("m marks(60)\n");
    scanf("%f",&m);
    printf("e marks(100)\n");
    scanf("%f",&e);

   float s=(a/4)+c+(m/2)+(e/2.5);
    printf("total marks is %f\n",s);

    if((s>=90)&&(s<=100)){
       printf("Grade:Ex\n");
       }
    if((s>=80)&&(s<90)){
        printf("Grade:A\n");
    }
    if((s>=70)&&(s<80)){
        printf("Grade : B\n");
    }
    if((s>=60)&&(s<70)){
        printf("Grade : C\n");
    }
    if((s>=50)&&(s<60)){
        printf("Grade : D\n");
    }
    if((s>=35)&&(s<50)){
        printf("Grade : P\n");
    }
    else if(s<35){
        printf("Grade : F\n");
    }
 }
 return 0;
}
