/*
Name - Harish Takri
Dept - Chemistry
Roll no - 21CY10016
Package - Code Blocks
Operating System - Windows
*/
#include<stdio.h>
//function
void func_five_digit(int c,int d,int num){

        if(num/100000==0&&num/10000>0){
            if(num%(c+d)!=0){               //number not divisible by (c+d)
                printf("%d \t",num);           // printing the number...
            }
          return;
        }

        func_five_digit(c,d,num*10+c);   //recursion functio ccalling
        func_five_digit(c,d,num*10+d);  //recursion functio ccalling

}



int main(){

int c,d;    //declaring two variables C&D
printf("Enter two digits :");
scanf("%d %d",&c,&d); // input of two variables
printf("\t The 5-digit nos are -  \t" );
func_five_digit(c,d,0); //function calling
return 0;

}
