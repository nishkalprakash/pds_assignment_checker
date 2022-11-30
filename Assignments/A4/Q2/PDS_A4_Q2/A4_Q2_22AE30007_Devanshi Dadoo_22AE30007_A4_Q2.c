/*
section 14
roll no.: 22AE30007
name: Devanshi Dadoo
Assigment 4
desciption: TO READ INTEGER FROM KEYBOARD AND PRINTING THE SUM OF ITS DIGITS
*/



#include<stdio.h>


int main()

{

int i,n,sum=0;
printf("enter a number");
scanf("%d", &n);
while(n<0||n>0) // FOR ALL CASES
{
 i=n%10; // TO FIND THE LAST DIGIT
 sum=sum+i;
 n=n/10;
}

printf("%d", sum);
}


