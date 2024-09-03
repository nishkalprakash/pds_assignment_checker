#include <stdio.h>

int main (){
int i, n, A[n];
printf("Enter the value of n : ");
scanf("%d", &n);

if(n>100) printf("Error : %d>100\n", n);
else{ printf("Enter the integers for array: ");

      for(i=0; i<n; i++){
      scanf("%d", &A[i]);
                         }
      printf("Original Array: ");
      for(i=0; i<n; i++)
      printf("%d ", A[i]);
      printf("\n");
     }
    
return 0;
}
