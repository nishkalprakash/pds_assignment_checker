/*
Section 14
Roll No : 22MI10032
Name : HEET PATEL
Assignment No : 5
Description : to see distribution of arrays in some ranges
*/
#include<stdio.h>
int main(){
int n;
printf("Enter array size :");
scanf("%d",&n);
int arr[n];
for(int i = 0 ; i < n ; i ++){
printf("%d index:",i);
scanf("%d",&arr[i]);
}
int bins;
printf("Enter the number of bins:");
scanf("%d",&bins);
int max,min;
max=arr[0];
min=arr[0];
for(int i = 0 ; i < n ; i++){
if(arr[i]>arr[i+1]){
max=arr[i];
}
if(arr[i]<=arr[i+1]){
min=arr[i];
}
}
int c;
c=max/bins;
 
return 0;

}
