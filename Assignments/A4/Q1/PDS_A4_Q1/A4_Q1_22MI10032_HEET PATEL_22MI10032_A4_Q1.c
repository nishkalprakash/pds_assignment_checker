/*
Section 14
Roll No : 22MI10032
Name : HEET PATEL
Assignment No : 4
Description : To display all factors of number 
*/

#include<stdio.h>
int main(){
int n;
printf("Enter the number:");
scanf("%d",&n);
int i = 1 ;
while(i<=n){
if(n%i==0){
printf("%d ",i);
}
i=i+1;
}

if (n==0){
printf("0");
}
if (n<0){
n = n * (-1);
while(i<=n){
if(n%i==0){
printf("%d ",i);
}
i=i+1;
}
}
return 0;
}
