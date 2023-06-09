//Nivedita Pal
//22MT30024
//LAB TEST 2



#include<stdio.h>
#include<string.h>

//structure to store record of students

struct  record{

char rollNo[10];
char branch[2];

 struct dob{

   int day[2];
   int month[2];
   int year[4];
 }

 };

 //Function to read record


 int main(){

 int n;
 printf("Enter the number of records to be stored <100:");
 scanf("%d",&n);
 if(n>100){

    printf("Invalid input of N");
 }
 printf("%d",n);

 //Allocating memory to store n records



 }

