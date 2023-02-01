/*
Section 14
Roll No : 22MI10032
Name : HEET PATEL
Assignment No : 11
Description :  to print sum of harmonic series up to n
*/
#include<stdio.h>
float sum = 0;
float sumseries(int n){
if(n==1){
return 1.0/1;
}

return (1.0/n +sumseries(n-1));
}
int main(){
printf("Enter n:");
int n;
scanf("%d",&n);
if(n<=0) {
printf("Invalid input");
return 0 ;
}
float d = sumseries(n);
printf("%.3f",d);
return 0;
}
