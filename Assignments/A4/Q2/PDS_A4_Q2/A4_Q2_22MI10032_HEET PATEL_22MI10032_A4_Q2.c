/*
Section 14
Roll No : 22MI10032
Name : HEET PATEL
Assignment No : 4
Description : To print sum of digits
*/

#include<stdio.h>
int main (){
printf("Enter the number:\n");
int n ;
scanf("%d",&n);
int sum , d , e ;
sum = 0 ;
if(n<0){
n=n*(-1);
}
 e = n ;
while(e>0){
d = e%10 ;
sum = sum + d ;
e = n/10 ;
n = e;
}
printf("Sum of digits:%d\n",sum);
return 0 ;
}
