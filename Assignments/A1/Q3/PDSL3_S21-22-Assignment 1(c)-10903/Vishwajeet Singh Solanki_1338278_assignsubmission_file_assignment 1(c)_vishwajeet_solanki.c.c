/*
NAME: VISHWAJEET SINGH SOLANKI
ROLL NO: 21CS10079
DEPT: COMPUTER SCIENCE
PACKAGE: CODEBLOCKS
ASSIGNMENT:1(c)
*/
#include<stdio.h>

int main(){
int day,m,k,n;
float f;
printf("Enter the number of machines:\n");
scanf("%d",&m);

printf("Enter the day number:\n");
scanf("%d",&day);
if(day==1){
    printf("Number of manufactured cars = %d\n",m);}
    else if(day==2){
        n=m+ m/2 + m/4;
        printf("Number of manufactured cars = %d\n",n);
    }
    else if(day==3||day==6){
        printf("Enter no. of machines under inspection:\n");
        scanf("%d",&k);
        n = (m-k) + (m-k)/2 + (m-k)/4;
        printf("Number of manufactured cars = %d\n",n);
    }
    else
    printf("Enter boosting fraction:\n");
    scanf("%f",&f);
    n= m+(m*f);
    printf("Number of manufactured cars = %d\n",n);
return 0;
}
