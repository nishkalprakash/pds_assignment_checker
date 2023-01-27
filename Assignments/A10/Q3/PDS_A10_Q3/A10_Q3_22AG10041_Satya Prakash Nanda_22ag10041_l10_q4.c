/*
SATYA PRAKASH NANDA
22AG10041
SECTION 14
LAB 10
QUESTION 4
*/
#include<stdio.h>

int main(){
int n;
printf("enter length of array:");
scanf("%d", &n);
int arr[n];
for(int i=0; i<n; i++){
printf("enter %d number:", i+1);
scanf("%d", &arr[i]);
}
int dup[n];
int k=0;
for(int i=0; i<n; i++){
for(int j=i+1;j<n ; j++){
if(arr[i]==arr[j]){
dup[k]=arr[i];
k++;

}
}
}
int min=arr[0];
for(int i=0; i<n; i++){
if(arr[i]<arr[0]){
min=arr[i];
}
}
int max=arr[0];
for(int i=0; i<n; i++){
if(arr[i]>arr[0]){
max=arr[i];
}
}
if(k!=0){
printf("the input list contains duplicate numbers:");
for(int i=0; i<k; i++){
printf(" %d ", dup[i]);
}
}
else{printf("the input list does not contain any duplicate numbers.");}
printf(" \n");
printf("minimum number is: %d\n", min);
printf("maximum number is: %d\n", max);
return 0;
}
