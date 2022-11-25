/*
 Section 14
 Roll No :22NA10022
 Name : Makrawat Singh
 Assignment No : 3
 Description : Read the symbol of binary arithmetic operator and perform that operation with
               the numbers inputted by the user
*/ 

#include<stdio.h>
#include<math.h>

int  main(){
    float x,y,z;
    char t; 
    //taking input from the user
    printf("Enter the operator and then the two decimal values you want to perform operator on:");
    scanf("%c%f%f",&t,&x,&y);
    switch(t){
    
    case '+':
           z=x+y;
           break;
    case '-':
           z=x-y;
           break;
    case '*':
           z=x*y;
           break;
    case '/':
           z=x/y;
           break;
    }
    printf("%f",z);
    
}
    
