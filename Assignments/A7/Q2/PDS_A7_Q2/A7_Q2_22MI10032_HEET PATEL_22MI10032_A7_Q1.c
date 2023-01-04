/*
Section 14
Roll No : 22MI10032
Name : HEET PATEL
Assignment No : 7
Description :  to output all numbers that appear a particular number of times.
*/
#include<stdio.h>
void function(int arr[],int n , int m){



}
int main(){
int n;
printf("Enter size of array:\n");
scanf("%d",&n);
int arr[n];
for(int i = 0 ; i < n ; i++){
scanf("%d",&arr[i]);
}
int m;
printf("Enter m:\n");
scanf("%d",&m);
int count;
for(int i = 0 ; i<n; i++){
 count = 1;
for(int j = i; j<n;j++){
if(count==m&&arr[i]!=arr[j]){
printf("%d ",arr[i]);
break;
}
if(j!=i){
++count;
if(count==m){
printf("%d ",arr[i]);

break;
}else{
printf("NO number ");
}

}

}

}

printf("appears %d times " , m);
}
