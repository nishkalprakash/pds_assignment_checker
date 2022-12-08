/*  *Section 14
 Roll No : 22CH10044
Name:Nitin
Assignment No 5 : 
Description : 
Program to find sum of series*/ 

#include<stdio.h>
int n,x;
double power(int x , int n){
int D=1;
   for(int i=1;i<=n;i++){
    D= D*x; } // D=x^n 
     return(D);}

double factorial(int n){
int R=1;
  for(int i=1;i<=n;i++){
  R=R*i;}
 return(R);
}
  

int main()
{ 
printf("Enter the value of n:\n ");
scanf("%d",&n);
printf("enter value of x:\n");
scanf("%d",&x);



double sum=1.0;
for(int i=1;i<=n;i++){
    
double Q = power( x , i);
 double T= factorial(i);
sum = sum+ (Q/T);
} 
printf(" sum of series upto n is %lf",sum);
 
return 0;}

   
