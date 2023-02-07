/*
Section 14
Roll No : 22MI10032
Name : HEET PATEL
Assignment No : 6
Description :  to perform the following operations on sets of integer valued elements
*/
#include<stdio.h>
   int* BuildSet(int *A, int n);
int SearchSet(int* A, int n, int x);
int* Union (int *A, int a, int *B, int b, int *union_size);// To return the union of two sets A and B.

       int* Intersection (int *A, int a, int *B, int b, int *inter_size);// To return the intersection of two sets A and B.

     int* Difference (int *A, int a, int *B, int b, int *diff_size);// To return the difference of two sets A and B. 
void Print(int *A, int n);// to print set
int main(){
printf("Enter size of A");
int n ;
scanf("%d",&n);
printf("A = ");
int arr[n];
for(int i = 0 ; i < n ; i++){
scanf("%d",&arr[i]);
}
printf("Enter size of B");
int n1 ;
scanf("%d",&n1);
printf("B = ");
int array[n1];
for(int i = 0 ; i < n1; i++){
scanf("%d",&array[i]);
}
printf("  Press ‘1’ to perform search in Set A\n");
printf("  Press ‘2’ to perform search in Set B\n");
printf("  Press ‘3’ to perform union of set A and set B\n");
printf("  Press ‘4’ to perform intersection of set A and setB\n");
printf("  Press ‘5’ to perform difference of Set A and set B\n");
printf("  Press any other key to quit.\n");

}
