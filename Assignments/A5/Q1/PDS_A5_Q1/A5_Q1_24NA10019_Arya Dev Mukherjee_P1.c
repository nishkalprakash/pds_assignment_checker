#include<stdio.h>
#define N 100
int main(){
int arr[N];
int n;
//first we read the array
printf("Enter the number of terms you want to enter: ");
scanf("%d", &n);
for(int i = 0; i<n; i++){
    int q;
    printf("\n Enter number: ");
    scanf("%d", &q);
    arr[i] = q;
    }
printf("\nOriginal array: ");    
for(int tp = 0; tp < n; tp++){
    printf(" %d", arr[tp]);
    }
    
//from here we start part b.
int p = 0;
for(int j = 0; j<n; j++){
    
    if(arr[j] < 0){
        int t = arr[p];
        arr[p] = arr[j];
        arr[j] = t;
        p++;
        }
        }
        
//printing back the changed array
printf("\nRearranged Array: ");
for(int y = 0; y<n; y++){
    printf(" %d", arr[y]);
    }
    
return 0;
}
