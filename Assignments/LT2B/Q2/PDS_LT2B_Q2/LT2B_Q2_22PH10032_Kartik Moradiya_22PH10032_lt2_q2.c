#include<stdio.h>
#include<stdlib.h> 
#define MAX 100
 
 void input(int A[][]){                                       //function to take input
  int m,n;							// m is row and n is colun
  
  printf("enter the value of m n");
  scnaf("%d\n%d",&m,&n);
   A[][]==A[(int*)malloc(m*sizeof(int))][(int*)malloc(n*sizeof(int))];  //dynamic memory allocation
  for(int i=0;i<m;i+=){
    for(int j=0;j<n;j++){
     scanf("%d",&A[i][j]);
    }
  }
 
 void print(int A[][]){                                  //function to print 2d array 
     int i=0;
    for(int j=0;j<n;j++){
     printf("%d",A[i][j]);
    }
    printf("\n");
    i++;
    if(i<m){
    print(A);
  }
 }
 int main()
 {
   int A[MAX][MAX];
   input(A)
   print(A);
 
  return 0;
 }
