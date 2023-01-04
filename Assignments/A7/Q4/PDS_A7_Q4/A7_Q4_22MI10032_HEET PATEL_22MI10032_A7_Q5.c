/*
Section 14
Roll No : 22MI10032
Name : HEET PATEL
Assignment No : 7
Description :  to print largest number on the appending of input numbers.
*/
#include<stdio.h>
int function(int n){
int d = n;
while(n>10){
n = n/10;
}
return n;
}

int main(){
int n;
printf("Enter size of array:\n");
scanf("%d",&n);
int arr[n];
for(int i = 0 ; i < n ; i++){
scanf("%d",&arr[i]);
}
for(int i = 0; i<n-1;i++){
for(int j=0; j<n-1-i;j++){
if(function(arr[j])<function(arr[j+1])){
int temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
for(int i = 0 ; i < n ; i++){
printf("%d",arr[i]);
}
}
