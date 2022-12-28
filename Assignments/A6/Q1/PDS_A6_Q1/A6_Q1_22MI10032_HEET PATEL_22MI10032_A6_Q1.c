/*
Section 14
Roll No : 22MI10032
Name : HEET PATEL
Assignment No : 6
Description : To compute the nth term of series.
*/
#include<stdio.h>
int print_term(int n){ // function 
if(n==0){ // base cases
return 0;
}
if(n==1){
return 1;
}
if(n==2){
return 2;
}

int a = print_term(n-1);
int b = print_term(n-2);
int c = print_term(n-3);
 
return 3*a*b - 2*b*c +1;//return value

}


int main(){

printf("Enter the number :\n");
int n;
scanf("%d",&n);// scan
 if(n<0){                   // invalid cases
printf("Invalid Input");
}
if(n==0){
printf("0");
}
for(int i = 0 ; i < n ; i++){ // output
printf("%d,",print_term(i));
}
return 0 ;
}
