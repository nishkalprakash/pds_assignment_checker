/*
Section 14 
Roll No. : 22NA30030
Name : Siddhant Chasta 
Assignment No. : 3 
Description : Program used to solve arithmetic problems 
*/

#include<stdio.h>
int main(){

float x,y;
char a;
printf("enter the numbers with operation(+,-,*,/) : ");
scanf("%c %f %f",&a, &x,&y);
switch(a){
        
case '+':  printf("sum is %f %f \n",x+y);
           break;
case '-':
           printf("difference is %f %f \n",x-y);
           break;
case '*':
           printf("product is %f %f \n",x*y);
           break;
case '/': 
           printf("division is %f %f \n",x/y);
           break;

default : printf("invalid operation");
}

return 0;
}




