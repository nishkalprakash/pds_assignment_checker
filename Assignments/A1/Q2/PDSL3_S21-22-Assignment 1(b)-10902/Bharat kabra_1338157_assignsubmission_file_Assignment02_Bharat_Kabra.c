/*
Name- Bharat Kabra
Roll: 21CH10015
Dept: Chemical
Package: Codeblocks
Assignment class: 1
*/
#include<stdio.h>
int main(){
int a,ones,hundredths,d,tens, number;
printf("In this program, you will get a reverse of a three digit number\n");
printf("Enter a three digit number:\n");
scanf("%d",&a);
ones = a/100;
hundredths = a%10;
d = a/10;
tens = d%10;
tens = tens*10;
hundredths = hundredths*100;
number = hundredths+tens+ones;
printf("The reverse of the number entered is:%d",number);
return 0;
}
