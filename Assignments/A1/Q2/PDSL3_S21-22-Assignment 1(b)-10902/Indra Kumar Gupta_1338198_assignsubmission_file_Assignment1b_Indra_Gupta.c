/*
Name: Indra Kumar Gupta
Roll: 21AE10043
Department: Aerospace Engineering
Package: CodeBlocks
Operating system: Windows
*/

//Assignment 1(b)

#include<stdio.h>
int main(){

int given_no, f,s,t;

printf("Enter a 3-digit number: ");
scanf("%d",&given_no);
f = given_no/100;
s = (given_no%100)/10;
t = given_no%10;
printf("Reverse number = %d", (100*t)+(10*s)+f);



return 0;
}
