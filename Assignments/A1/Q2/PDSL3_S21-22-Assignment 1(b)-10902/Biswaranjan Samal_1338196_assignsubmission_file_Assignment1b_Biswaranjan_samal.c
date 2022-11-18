/*
Name:Biswaranjan Samal
Roll no: 21IM10011
Dept: Industrial and Systems Engineering
Package: Codeblocks
Assignment: 1b Reversal of 3 digit number
*/

#include<stdio.h>
#include<math.h>
int main(){

int num,d1,d2,d3,new_num ;
printf("Enter the number:");
scanf("%d",&num);


d1 = num%10 ; /*first digit of new number */
d2 = num%100;
d2 =d2/10;  /*second digit of new num */
d3 = num/100; /* last digit of new num and first dig of old num */

new_num = 100*d1 + 10*d2 + d3;

printf("Reversed number is: %sd" ,new_num);






















return 0; }
