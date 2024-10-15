// Program to sort array
// Code creator : Nishita Gupta
// Roll number : 24NA10042

#include<stdio.h>
#define N  101                 //defining max array size

int main()

{ int n;                       
  int A[N];                    //defining array
  int k;
   printf("enter the size of array:");
   scanf("%d",&n);              // taking input of number of elements from user
   printf("enter the array elements");
   for(int k=0; k<n;k++){scanf("%d", &A[k]);           //scanning array elements
                         printf("A[%d]=%d ",k,A[k]);}
int temp;                
int i;
int j;

for ( i = 0; i < n; i++){
                          for ( j = 0; j < n-i-1; j++){     
                                                          if (A[j] > A[j+1]) {
                                                                                  temp = A[j];  //swapping a[j+1] and a[j]
                                                                                   A[j] = A[j+1];
                                                                                   A[j+1] = temp;      
                                                                                                       }
                      
               
                                                         } }              //sorted array in ascending order

int m;
printf("\n enter m:");                  
scanf("%d", &m);                  //taking input of new number m

A[n]=m;                         //inserting m into array
printf("\n output array:");
for (k=0; k<=n; k++){
                       if (A[n]<A[k]){ 
                                      temp = A[n];
                                      A[n] = A[k];                      //comparing m with array elements and swapping
                                      A[k] = temp;
                                                    }
                     }
for ( i = 0; i < n+1; i++)             printf(" A[%d]=%d ",i,A[i]);       // printing the final sorted array

return 0;                //finishing the program
}
