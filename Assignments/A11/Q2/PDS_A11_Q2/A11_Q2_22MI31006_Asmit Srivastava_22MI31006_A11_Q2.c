#include<stdio.h>
int fibonacci(int n);//fxn for recurssion

int main(){
int n,k=0,dig;
printf("enter n[0-100]:");
scanf("%d" ,&n);
while(1){
dig=fibonacci(k++);
if(dig==n){
printf("yes\n");
break;}
else if(dig>n){
printf("no");
break;}}
return 0;
}

int fibonacci(int n){
int x;
if(n==0){     //base conditions
return 0;}
else if(n==1){
return 1;}
else{
x=fibonacci(n-1)+fibonacci(n-2);} //main condition
return x;
}
