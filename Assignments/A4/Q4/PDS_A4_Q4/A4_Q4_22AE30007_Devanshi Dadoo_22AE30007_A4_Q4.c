/*
section 14
roll no.: 22AE30007
name: Devanshi Dadoo
Assigment 4
desciption: TO WRITE A PROGRAM THAT PRINTS OUT A PATTERN BASED ON THE USER INPUT
*/



#include<stdio.h>


int main()

{

int i,num,j; //DECLARING INTEGERS
printf("enter a number");
scanf("%d", &num);
if(num<11 && num>1) //SETTING LIMIT BETWEEN 2-10
{
for(i=0; i<num+1; i++) 
{
 
 for(j=0; j<i; j++) // NESTED LOOP
 {
 if((j+1)%2==0)
  {
  printf("0");
  }
 else 
 {
  printf("1");
 }
 }
 
   printf("\n");
 
}
}
}
 
