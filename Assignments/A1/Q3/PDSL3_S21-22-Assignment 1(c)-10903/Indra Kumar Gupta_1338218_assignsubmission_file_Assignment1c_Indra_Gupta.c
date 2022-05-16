/*
Name: Indra Kumar Gupta
Roll: 21AE10043
Department: Aerospace Engineering
Package: CodeBlocks
Operating system: Windows
*/

//Assignment 1(c)

#include<stdio.h>
#include<math.h>
int main(){

int m, n,d,k,t;
float bf;

printf("Enter the number of machines: ");
scanf("%d",&m);
printf("Enter the day number (1-7): ");
scanf("%d",&d);
switch(d){
 case 1:
     printf("Number of manufactured cars = %d.", m);
     break;
 case 2:
     t= round(m + m/2 + m/4);
     printf("Number of manufactured cars = %d.", t);
     break;

case 3:
    printf("Enter no. of machines under inspection: ");
scanf("%d",&k);
n = round(m-k + (m-k)/2 + (m-k)/4);
printf("Number of manufactured cars = %d.", n);
     break;
case 4:
    printf("Enter boosting fraction: ");
scanf("%d",&bf);
t=  m+ round(bf*m);
printf("Number of manufactured cars = %d.", t);
     break;
case 5:
    printf("Enter boosting fraction: ");
scanf("%d",&bf);
t=  m+ round(bf*m);
printf("Number of manufactured cars = %d.", t);
     break;
case 6:
    printf("Enter no. of machines under inspection: ");
scanf("%d",&k);
n = round(m-k + (m-k)/2 + (m-k)/4);
printf("Number of manufactured cars = %d.", n);
     break;
case 7:
    printf("Enter boosting fraction: ");
scanf("%d",&bf);
t=  m+ round(bf*m);
printf("Number of manufactured cars = %d.", t);
     break;
default:  printf("Invalid day number\n");
break;
}



return 0;
}
