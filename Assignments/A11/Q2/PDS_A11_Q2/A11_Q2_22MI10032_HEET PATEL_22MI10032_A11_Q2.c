/*
Section 14
Roll No : 22MI10032
Name : HEET PATEL
Assignment No : 11
Description :  to check if a number belongs to fibonacci sequence
*/
#include<stdio.h>
int fibo(int n){
if(n==0) return 0;
if(n==1) return 1;

return (fibo(n-1)+fibo(n-2));
}
int main(){
printf("Enter number which need to be checked:");
int n,a=0;
int flag =0;
scanf("%d",&n);
while(1){
int digit = fibo(a++);
if(digit==n){
flag=1;
 printf("YES\n");
break;
}
else if(digit>n){
printf("NO\n");
break;
}
}

//if(flag==0) printf("NO\n");
}
