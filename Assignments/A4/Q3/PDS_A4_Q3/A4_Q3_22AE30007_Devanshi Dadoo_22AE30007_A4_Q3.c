/*
section 14
roll no.: 22AE30007
name: Devanshi Dadoo
Assigment 4
desciption:TO READ AN INTEGER AND DISPLAY DIGITS IN REVERSE IN WORDS
*/



#include<stdio.h>


int main()

{
int i;  
long int n;         // SINCE WE NEED A LONG INTEGER N           
printf("enter a number");
scanf("%ld", &n);
while(n>0 && n<10000000000)  
{
 i=n%10;
 n=n/10;
 if(i==1)
 {
   printf("one ");
 }
if(i==2)
 {
   printf("two ");
 }
if(i==3)
 {
   printf("three ");
 }
if(i==4)
 {
   printf("four ");
 }
if(i==5)
 {
   printf("five ");
 }
if(i==6)
 {
   printf("six ");
 }
if(i==7)
 {
   printf("seven ");
 }
if(i==8)
 {
   printf("eight ");
 }
if(i==9)
 {
   printf("nine ");
 }
if(i==0)
 {
   printf("zero ");
 }
}
if(n==0)
{
printf("zero");
}
if(n<0 || n>99999999999)
{
printf("please enter a valid number");
}
}


