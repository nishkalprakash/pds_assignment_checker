/*
* Section 2
* Roll No.: 22NA30019
* Name : Kavita Thakur
* Assignment No.: 5
* Description :
*/
#include<stdio.h>
//function prototype/declaration
void swap(int p,int q);
void reverse();
void cyclicShift();

int main(){
   int n,a[100]; //array has maximum limit of 100
   printf("enter value of n : ");
   scanf("%d",&n);

   for( int i=0;i<n;i++){               //taking input from user and storing them in array
     printf("Enter element %d : ",i+1);
     scanf("%d",&a[i]);



return 0;
}


//function definition
void swap(int p,int q){
     int temp;
     temp = p;
     p = q;
     q = temp;
}

void reverse(){
    for(int i=1;i<n/2;i++){
        a[i]=a[n-i];
        printf("reverse=%d",a[i])
    }
}

void cyclicShift(){
}

