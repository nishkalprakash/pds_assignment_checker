/*
satya prakash nanda
22ag10041
section 14
lab 11
question 1
*/
#include<stdio.h>
float sum(int n);
int main(){
int n;
printf("enter the value of n:");
scanf("%d", &n);
printf("output is:%0.3f\n", sum(n));
return 0;
}

float sum(int n){
if(n==0){return 0.00;}
float sn= sum(n-1) + 1.0/n;
return sn;
}
