/*
section 14
roll no : 22MI33013
name : Mahim Dungarwal
assingnment : 3
description :  program to check points
*/

#include <stdio.h>

int main()

{
int a; // a is the two digit number
scanf("%d", &a);

int b = (a/10);
int c = (a % 10);

if(a/10 == b) { 

if(b == 1) 
printf("ten ");
}

if(b == 2) {
printf("twenty ");
}

if(b == 3) {
printf("thirty ");
}

if(b == 4) {
printf("forty ");
}

if(b == 5) {
printf("fifty ");
}

if(b == 6) {
printf("sixty ");
}

if(b == 7) {
printf("seventy ");
}

if(b == 8) {
printf("eighty ");
}

if(b == 9)  {
printf("ninty ");
}

if(a % 10 == c ) {

if( c == 1)  
printf("one ");
}

if(c == 2)  {
printf("two ");
}

if(c == 3) {
printf("three ");
}

if(c == 4) {
printf("four ");
}

if(c == 5) {
printf("five ");
}

if(c == 6)  {
printf("six ");
}

if(c == 7) {
printf("seven ");
}

if(c == 8) {
printf("eight ");
}

if(c == 9) {
printf("nine ");
}

return 0;
}
