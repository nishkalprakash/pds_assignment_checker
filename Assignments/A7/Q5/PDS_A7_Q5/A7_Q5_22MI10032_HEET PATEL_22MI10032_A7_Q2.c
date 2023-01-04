/*
Section 14
Roll No : 22MI10032
Name : HEET PATEL
Assignment No : 7
Description :  to find how many elements are out of order.
*/
#include<stdio.h>
int main(){

int n;
printf("Enter size of array:\n");
scanf("%d",&n);
int arr[n];
for(int i = 0 ; i < n ; i++){
scanf("%d",&arr[i]);
}
int m;
for(int i = 0 ; i < n ; i++){
for(int j=0;j<n;j++){
if(arr[i]==arr[j]){
m=0;
}
}}


printf("Out of order:%d",m);

}
