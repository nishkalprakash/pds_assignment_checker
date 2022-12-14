/*
Section 14
Roll No : 22MI10032
Name : HEET PATEL
Assignment No : LABTEST 1
Description : to print largest number and second largest number.
*/
#include<stdio.h>
 
void largest(int arr[]);// function to print largest number
void second(int arr[]);// function to print second largest number


int main (){// main
printf("Enter numbers:\n");
int n,count;

count = 0;
while(1){
scanf("%d",&n);
if(n<0){
printf("<Program terminates>\n");
break;
}
count = count + 1;
int arr[count];
void largest(int arr[count]);
void second(int arr[count]);
}

return 0;
}
void largest(int arr[]){// function starts

 int n;
  arr[n];
 int max = arr[0];
 for(int i = 0 ; i < n ;i++){
if(max<arr[i]){
max=arr[i];
}

}
printf("Largest number: %d\n",max);

}
void second(int arr[]){
int n;
  arr[n];
 int secmax = arr[0];


 for(int i = 0 ; i < n ;i++){
for(int j = i + 1 ; j < n ; j++){
if(arr[i]<arr[j]){
secmax=arr[i];
}
}
}
printf("second Largest number: %d\n",secmax);



}
