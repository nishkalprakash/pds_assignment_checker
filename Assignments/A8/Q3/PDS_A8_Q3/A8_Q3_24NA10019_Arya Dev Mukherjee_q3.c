#include<stdio.h>
#include<math.h>

int digits(int a, int b){
    if(a==0){
        return b;
        }
    
    else{
        a = a/10;
        b++;
        return digits(a,b);
        }
    }

int firstdigit(int a){
    int y = digits(a,0);
    return a/(int)pow(10,y-1);
    }

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
                }
                
void fdsort(int A[], int n){
  for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-i; j++){
            int y;
            if(firstdigit(A[j])<firstdigit(A[j+1])){
                y = A[j];
                A[j]=A[j+1];
                A[j+1]=y;
                }
                }
                }
                }
       

int main(){
    printf("How many entries in array: ");
    int n;
    scanf("%d", &n);
    int A[n];
    for(int i = 0; i <n; i++){
        scanf("%d",&A[i]);
        }
        
    bubblesort(A,n);
    fdsort(A,n);
    
   for(int i = 0; i<n; i++){
       printf("%d", A[i]);
       }
       
       return 0;
       }
       
    
    
    


        
