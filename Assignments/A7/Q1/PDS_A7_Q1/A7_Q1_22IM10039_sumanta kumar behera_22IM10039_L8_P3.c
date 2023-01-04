# include<stdio.h>
int main() {
     int A[6];
     int s;
     printf("Enter 5 numbers : ");
    for(int i=0; i<=4;i++) {
     scanf("%d", &A[i]);
    } printf("Enter 6th number : ");
      scanf("%d", &s);
     if( s < A[0] ) {
        A[5] = A[4];
        A[4] = A[3];
        A[3] = A[2];
        A[2] = A[1];
        A[1] = A[0];
        A[0] = s;
   }
     if( A[0] < s && s < A[1] ) {
        A[5] = A[4];
        A[4] = A[3];
        A[3] = A[2];
        A[2] = A[1];
        A[1] = s;
      
   }
     if( A[1] < s && s < A[2] ) {
        A[5] = A[4];
        A[4] = A[3];
        A[3] = A[2];
        A[2] = s;

   }
     if( s > A[2] && s < A[3] ) {
        A[5] = A[4];
        A[4] = A[3];
        A[3] = s;

   }
     if( A[3] < s && s < A[4] ) {
        A[5] = A[4];
        A[4] = s;

   }
     if( s > A[4] ) {
        A[5] = s;

   } printf("Output array is : ");
     for(int j=0;j<=5;j++) {
    printf("%d ", A[j]);
} return 0;
}

