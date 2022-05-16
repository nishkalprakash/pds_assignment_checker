/*
Name: Ankit Yadav
Roll No : 21EE30005
Section: 3
Department: Electrical Engineering
Operating System: Windows 11
Package: Codeblocks
Lab Test1 : Question 1
*/

#include<stdio.h>


int main(){

float sal,hloan,lip,medi,tax;

printf("Enter your monthly salary\n");
scanf("%f",&sal);
sal=sal*12;
printf("Enter your yearly house loan\n");
scanf("%f",&hloan);
printf("Enter your yearly life insurance premium\n");
scanf("%f",&lip);
printf("Enter your yearly medical insurance\n");
scanf("%f",&medi);


if(sal>1000000){

    if(hloan>250000) sal= sal-250000;
    else sal=sal-hloan;

    if(lip>150000) sal=sal-150000;
    else sal=sal-lip;

    if(medi>50000) sal=sal-50000;
    else sal=sal-medi;

}

if(sal<250000) tax=0;
if(sal>250000&&sal<500000) tax= sal*0.05;
if(sal>500000&&sal<750000) tax= 12500+(sal*0.1);
if(sal>750000&&sal<1000000) tax= 37500+(sal*0.15);
if(sal>1000000&&sal<1250000) tax= 75000+(sal*0.2);
if(sal>1250000&&sal<1500000) tax= 125000+(sal*0.25);
if(sal>1500000) tax= 187500+(sal*0.3);

printf("Total Tax = %f\n",tax);


return 0;
}
