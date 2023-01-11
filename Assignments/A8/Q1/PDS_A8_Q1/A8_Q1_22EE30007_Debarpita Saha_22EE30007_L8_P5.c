/*
* Section 14
* Roll No : 22EE30007
* Name : Debarpita Saha
* Assignment No : 8
* Description : Program to input elements in row order and print them out in column order
*/
#include<stdio.h>
int main() 
{ 
int N;
int arr[N][N]; 
int i, j; 
printf("Enter the number of elements in one row:");
scanf("%d", &N);
printf("Enter the elements of the %dx%d array in row-major order:\n", N, N); 
for (i = 0; i < N; i++) { 
for (j = 0; j < N; j++) {
 scanf("%d", &arr[i][j]); 
} 
} 
printf("The elements of the array in column-major order are:\n"); 
for (j = 0; j < N; j++) { 
for (i = 0; i < N; i++) { 
printf("%d ", arr[i][j]);
 } 
printf("\n"); 
} 
return 0;
}




 
