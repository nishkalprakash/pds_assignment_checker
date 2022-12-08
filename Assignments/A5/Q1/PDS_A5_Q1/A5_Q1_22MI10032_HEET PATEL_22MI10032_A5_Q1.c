/*
Section 14
Roll No : 22MI10032
Name : HEET PATEL
Assignment No : 5
Description : To find the sum of n terms of e^x series
*/

#include<stdio.h>

int power(int x ,int n );
int fact(int n );

int main (){
int x, n,i;
printf("Enter x and n:\n");
scanf("%d%d",&x,&n);
float sum ,term;
sum = 1;


for(int i = 1 ; i < n ; i++){

float c = power(x,i);
float d = fact(i);
term = c/d;
sum +=term;
}
printf("%f",sum);

return 0;

}

int power(int x,int n){
int a=1;
for(int i = 0 ; i < n ; i++){

a = x * a;

}
return a;
}

int fact(int n){
int prod = 1;
for(int i = 1 ; i <= n ; i ++){
prod = prod *i;
}
return prod;
}
