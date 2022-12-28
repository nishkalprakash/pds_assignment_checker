/*
Section 14 
Roll No. : 22NA30030
Name : Siddhant Chasta 
Assignment No. : 6
Description :A program to find out the pairs of CoPrime numbers  
*/

#include<stdio.h>

void CoPrime(int a,int b);
int gcd(int m,int n);
void pair(int arrayName);



int main(){
   int arr[5],a,b;
   printf("enter the numbers : ");
   scanf("%d %d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
   
   CoPrime(a,b);
   return gcd(a,b);


}

int gcd(int a,int b){
    if(a>b){
    for(int i=1;i<=b;i++){
       if (a%i==0 && b%i==0)
       printf("gcd of %d,%d is %d",a,b,i);
    }
 }
   else  
    for(int i=1;i<=a;i++){
       if (a%i==0 && b%i==0)
       printf("gcd of %d,%d is %d",a,b,i);
    }
 }


void CoPrime(int a,int b){
if(gcd(a,b)==1)
printf("(%d,%d)",a,b);
}

void pair(int arrayName){
     
}












