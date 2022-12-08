
/*  *Section 14
 Roll No : 22CH10044
Name:Nitin
Assignment No 5 : 
*/ 
#include<stdio.h>

 int  gcd(int A, int B)
{  int  temp;
while ((B % A) != 0)  {
temp = B % A;
B = A;
A = temp;
if(A==1)
return 1;
else return 0;
               }
 
  

int main(){
int a[5];
printf("Enter the values\n");
for(int i=0;i<=4;i++){

scanf("%d",&a[i]);

}
printf(" aray are");
for(int i=0;i<=4;i++){
ptintf("%d",a[i]);}
for(int j=i+1;j<5;j++){
int a =gcd(int A, int B)
