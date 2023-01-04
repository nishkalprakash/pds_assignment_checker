/*
Section 14
Roll No : 22MI10032
Name : HEET PATEL
Assignment No : 7
Description :  to insert a new array to already existing sorted array.
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
int m,d;
printf("Enter m:\n");
scanf("%d",&m);
int c = n+1;
int b[c];
for(int i = 0 ; i < n ; i++){
if(arr[i]>m){
b[i]=m;
 d = i;

break;
}

}
if(arr[n-1]<m){
b[c-1]=m;
d=n-1;
for(int i = 0 ; i < n ; i++){
b[i]=arr[i];
}
printf("Output Array: ");
for(int i = 0 ; i < c ; i++){
printf("%d ",b[i]);
}
}
else{
for(int i = 0 ; i < d ; i++){
b[i]=arr[i];
}
for(int i = d+1 ; i < c ; i++){
b[i]=arr[i-1];
}
printf("Output Array: ");
for(int i = 0 ; i < c ; i++){
printf("%d ",b[i]);
}
}
}
