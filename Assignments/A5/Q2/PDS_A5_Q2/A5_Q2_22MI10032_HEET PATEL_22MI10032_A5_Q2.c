/*
Section 14
Roll No : 22MI10032
Name : HEET PATEL
Assignment No : 5
Description : To check if numbers are coprime or not
*/
#include<stdio.h>
void coprime(int a , int b);
int gcd(int a, int b);
void pair(int arr[]);
int main(){

int arr[5];
for(int i = 0 ; i < 5 ; i ++){
printf("%d index:",i);
scanf("%d",&arr[i]);
}
int c = gcd (arr[0],arr[1]);
int d = gcd (arr[0],arr[2]);
int e = gcd (arr[0],arr[3]);
int f = gcd (arr[0],arr[4]);
int g = gcd (arr[1],arr[2]);
int h = gcd (arr[1],arr[3]);
int i = gcd (arr[1],arr[4]);
int j = gcd (arr[2],arr[3]);
int k = gcd (arr[2],arr[4]);
int l = gcd (arr[3],arr[4]);

if(c == 1 )
printf("%d and %d are Co-prime\n",arr[0],arr[1]);
if(d == 1 )
printf("%d and %d are Co-prime\n",arr[0],arr[2]);
if(e == 1 )
printf("%d and %d are Co-prime\n",arr[0],arr[3]);	;
if(f == 1 )
printf("%d and %d are Co-prime\n",arr[0],arr[4]);
if(g == 1 )
printf("%d and %d are Co-prime\n",arr[1],arr[2]);
if(h== 1)
printf("%d and %d are Co-prime\n",arr[1],arr[3]);
if(i == 1)
printf("%d and %d are Co-prime\n",arr[1],arr[4]);
if(j == 1 )
printf("%d and %d are Co-prime\n",arr[2],arr[3]);
if(k == 1 )
printf("%d and %d are Co-prime\n",arr[2],arr[4]);
if(l == 1 )
printf("%d and %d are Co-prime\n",arr[3],arr[4]);

if(c!=1 && d!=1 && e!=1 && f!=1 &&g!=1 && h!=1 && j!=1 && k!=1 && l!=1 )
printf("No co-prime found");
}
int gcd(int a, int b){
int temp;
if(a>b){
temp = b;
b = a;
a = temp;
}
while((b%a)!=0){
temp=b%a;
b=a;
a=temp;
}
return a;
}


