//Roll No.:23IE10011
//Name: Avik Ghosh
#include <stdio.h>
#include <stdlib.h>

int main( ) {
  int A[50],n,i,t,k=0;
    printf("Enter the number of random numbers to be entered\n");
  scanf("%d",&n);
  printf("Original array:\n");
  for(i=0;i<n;i++) {
    A[i]=((rand()%91)+10);
    printf("%d,",A[i]);
  }
  printf("\n");
  for(i=0;i<n-2;i+=2){
    if(A[i]>A[i+2]){
      //variable t to interchange the values of 'i'th and 'i+2'th elements
      t=A[i];
      A[i]=A[i+2];
      A[i+2]=t;
      k++; //variable k is to count the number of interchanges
    }
    t=0;}
  printf("Array after the interchanges:\n");
   for(i=0;i<n;i++) 
     printf("%d,",A[i]);
   printf("\n");
   printf("Number of the interchanges=%d\n",k);
   return 0;
}
   
  
    
