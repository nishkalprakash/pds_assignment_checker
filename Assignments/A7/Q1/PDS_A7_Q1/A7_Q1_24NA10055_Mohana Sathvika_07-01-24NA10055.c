#include <stdio.h>
int fact(int n){ //function computing the factorial of n
 int mult;
 mult=1;
 while(n>0){
   mult=n*mult;
   n=n-1; }
 return mult;
   }
int power(int x,int n){  //function computing x raised to power n
 int power=1;
 while(n>0){
  power=power*x;
  n=n-1; }
 return power; }
float summation(int x,int n){ // function computing the summation
 float term,sum=0;
 int k=0;
 while(k<n){
  term= (float)power(x,k) / fact(k);
  sum=sum+term;
  k++;}
 
 return sum;  }
 



 
int main(){
int n,x;
printf("enter values for n and x respectively");
scanf("%d%d", &x,&n); //taking inputs for n and x
printf("%f",summation(x,n));
}
 
 
