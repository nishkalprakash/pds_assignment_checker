/*
section 14
roll no : 22mi10013
topic: print largest number on the appending of input numbers */
#include<stdio.h>
int function(int n) {
int d=n;
while (n>10) {
n=n/10;
}
return n;
}
int main(){
int n;
printf("enter size of array :\n");
scanf("%d" ,&n);
int arr[n];
for(int i=0;i < n;i++){
scanf("%d" , &arr[i]);
}
for (int i=0;i < n-1;i++){
for (int j=0;j < n-1-i;j++){
if(function(arr[j])<function(arr[j+1])){
int temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
for (int i = 0;i < n ; i++){
printf("%d",arr[i]);
}
}
