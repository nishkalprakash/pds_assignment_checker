#include<stdio.h>

void bubblesort(int A[], int n){
  for(int i = 0; i<n; i++){
        for(int j = 0; j<n-i; j++){
            int y;
            if(A[j]>A[j+1]){
                y = A[j];
                A[j]=A[j+1];
                A[j+1]=y;
                }
                }
                }
                for(int i = 0; i<n; i++){
        printf("%d,",A[i]);
        }
                }
                            
int main(){
    printf("How many entries in array: ");
    int n;
    scanf("%d", &n);
    int A[n+1];
    for(int i = 0; i <n; i++){
        scanf("%d",&A[i]);
        }
        
    printf("Enter m: ");
    scanf("%d", &A[n+1]);
        
    bubblesort(A,n+1);
    return 0;
    
     }
